// lvtclp_headercallbacks.h                                           -*-C++-*-

/*
 / / Copyright 2023 Codethink Ltd <codethink*@codethink.co.uk>
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

#ifndef INCLUDED_CT_LVTCLP_HEADERCALLBACKS
#define INCLUDED_CT_LVTCLP_HEADERCALLBACKS

#include <functional>
#include <string>

namespace Codethink::lvtclp {
using HeaderLocationCallback_f =
    std::function<void(std::string const& sourceFile, std::string const& includedFile, unsigned lineNo)>;
}
#endif
