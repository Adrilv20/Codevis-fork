// ct_lvtclp_staticfnhandler.cpp                                      -*-C++-*-

/*
// Copyright 2023 Codethink Ltd <codethink@codethink.co.uk>
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#include <ct_lvtclp_staticfnhandler.h>

#include <ct_lvtclp_clputil.h>

#include <clang/AST/DeclTemplate.h>

#include <cassert>
#include <optional>
#include <string>
#include <unordered_map>
#include <unordered_set>

namespace {

using FnId = std::size_t;
// std::hash of the qualified name of the function plus arg types.
// This whole data structure is per-file so we won't be confused by static
// functions.

FnId funcDeclToId(const clang::FunctionDecl *decl)
// To uniquely identify a function we need its template parameters, qualified
// name and argument types (because of overloading)
{
    return static_cast<FnId>(decl->getGlobalID());
}

} // end unnamed namespace

namespace Codethink::lvtclp {

struct StaticFnHandler::Private {
    lvtmdb::ObjectStore& d_memDb;

    std::unordered_map<FnId, std::unordered_set<lvtmdb::TypeObject *>> fnDepUdt;
    // stores dependency relationships from functions to UDTs
    std::unordered_map<FnId, std::unordered_set<FnId>> fnDepFn;
    // stores dependency relationships from functions to functions
    std::unordered_map<lvtmdb::TypeObject *, std::unordered_set<FnId>> udtDepFn;
    // stores dependency relationships from UDTs to functions
    std::unordered_map<lvtmdb::FunctionObject *, std::unordered_set<lvtmdb::FunctionObject *>> callgraphDeps;
    // stores the callgraph dependency for functions

    std::unordered_set<FnId> visited;
    // used in flattenFn

    explicit Private(lvtmdb::ObjectStore& memDb): d_memDb(memDb)
    {
    }

    void clear()
    {
        fnDepUdt.clear();
        fnDepFn.clear();
        udtDepFn.clear();
        visited.clear();
        callgraphDeps.clear();
    }
};

StaticFnHandler::StaticFnHandler(lvtmdb::ObjectStore& memDb): d(std::make_unique<StaticFnHandler::Private>(memDb))
{
}

StaticFnHandler::~StaticFnHandler() noexcept = default;

void StaticFnHandler::addFnUses(const clang::FunctionDecl *decl, lvtmdb::TypeObject *udt)
{
    FnId fnId = funcDeclToId(decl);
    d->fnDepUdt[fnId].insert(udt);
}

void StaticFnHandler::addFnUses(const clang::FunctionDecl *decl, const clang::FunctionDecl *dep)
{
    FnId fnId = funcDeclToId(decl);
    FnId depId = funcDeclToId(dep);
    if (fnId != depId) {
        d->fnDepFn[fnId].insert(depId);
    }
}

void StaticFnHandler::addCallgraphDep(lvtmdb::FunctionObject *source_f, lvtmdb::FunctionObject *target_f)
{
    if (!source_f || !target_f || source_f == target_f) {
        return;
    }

    d->callgraphDeps[source_f].insert(target_f);
}

void StaticFnHandler::addUdtUses(lvtmdb::TypeObject *udt, const clang::FunctionDecl *decl)
{
    FnId fnId = funcDeclToId(decl);
    d->udtDepFn[udt].insert(fnId);
}

void StaticFnHandler::flattenFn(const FnId sourceFn)
{
    if (d->visited.find(sourceFn) != d->visited.end()) {
        // don't recurse forever for circular function dependencies
        return;
    }
    d->visited.insert(sourceFn);

    // for each function used by sourceFn
    for (const FnId fnDep : d->fnDepFn[sourceFn]) {
        if (fnDep == sourceFn) {
            continue;
        }

        // first we need to flatten the fn dependency to make sure it has all of
        // its udts
        flattenFn(fnDep);

        // for each udt used by the function dependency
        for (lvtmdb::TypeObject *udtDep : d->fnDepUdt[fnDep]) {
            // add as a dependency of sourceFn
            d->fnDepUdt[sourceFn].insert(udtDep);
        }
    }
}

void StaticFnHandler::writeOutToDb()
{
    // Save function dependencies
    for (auto const& [sourceFn, targetFns] : d->callgraphDeps) {
        for (auto const& targetFn : targetFns) {
            ClpUtil::addFnDependency(sourceFn, targetFn);
        }
    }

    // short circuit to skip flattening functions where we would end up with
    // nothing to write to the database anyway
    if (d->udtDepFn.empty() || d->fnDepUdt.empty()) {
        return;
    }

    // for each function with a function dependency, flatten out the fn dep
    // so we only have fn -> udt dependencies
    for (const auto& [sourceFn, _] : d->fnDepFn) {
        flattenFn(sourceFn);
    }

    // for each udt -> func dependency
    for (const auto& [sourceUdt, fnIds] : d->udtDepFn) {
        for (const FnId fnId : fnIds) {
            // for each udt dependency of that func
            for (lvtmdb::TypeObject *targetUdt : d->fnDepUdt[fnId]) {
                // sourceUdt -> fnId -> targetUdt
                // add udt -> udt dependency to db
                ClpUtil::addUsesInImpl(sourceUdt, targetUdt);
            }
        }
    }
}

void StaticFnHandler::reset()
{
    d->clear();
}

} // end namespace Codethink::lvtclp
