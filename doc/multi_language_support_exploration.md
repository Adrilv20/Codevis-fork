# Multi-Language Support: Exploration of Alternatives

## 1. Introduction

Codevis currently only supports **C++** (with experimental Fortran). This document explores strategies to add support for **Java, Python, Go, and JavaScript/TypeScript**, analyzing which parts of the system can be reused and which need adapting.

---

## 2. System Decomposition for Multi-Language

The tool can be split into **language-dependent** and **language-independent** parts:

| Layer | Language-Dependent? | Notes |
|-------|:-------------------:|-------|
| **Parsing / AST Analysis** (`lvtclp`) | ✅ Fully | Uses Clang APIs; must be replaced per language |
| **Filesystem Scanner** (`FilesystemScanner`) | ⚠️ Partially | Package detection rules are C++/Lakosian-specific; generic file discovery is reusable |
| **In-Memory Model** (`lvtmdb`) | ⚠️ Partially | Concepts like classes, functions, namespaces map to most languages; may need extension |
| **Database Schema** (`cad_db.sql`) | ⚠️ Partially | Core entity types are generic; language-specific features need new tables/columns |
| **Data Loading** (`lvtldr`) | ✅ Reusable | Language-agnostic graph loading from DB |
| **Visualization** (`lvtqtc`, `lvtqtw`) | ✅ Reusable | Renders generic graph nodes/edges |
| **Plugin System** (`lvtplg`, `plugin_system`) | ✅ Reusable | Can host language-specific analysis plugins |
| **CLI Tools** (`cliapps`) | ⚠️ Minor adaptation | Need new entry points or flags for different parsers |
| **Semantic Rules** (`semrules/`) | ⚠️ Per ecosystem | New rules needed for Maven/npm/Go modules/pip packages |
| **Project File** (`lvtprj`) | ✅ Reusable | Container format is language-agnostic |
| **Code Generation** (`lvtcgn`) | ❌ Language-specific | Templates are C++ only; new templates per language |

---

## 3. Approach Options for the Parsing Layer

### Option A: Language-Specific Native Parsers (One parser per language)

Each language gets its own dedicated parser, analogous to how `lvtclp` uses libclang for C++:

| Language | Parser Technology | Pros | Cons |
|----------|------------------|------|------|
| **Java** | Eclipse JDT / JavaParser / javac plugin API | Mature, full type resolution | JVM dependency; complex integration with C++ codebase |
| **Python** | `ast` module / LibCST / Pyright | Native Python tooling; type stubs support | Dynamic typing = incomplete relationships |
| **Go** | `go/ast` + `go/types` (standard library) | Official tooling, excellent type info | Requires Go runtime |
| **JS/TS** | TypeScript Compiler API / Babel AST | Full type resolution for TS; Babel for JS | Node.js dependency; large AST |

**Architecture:** Each parser would be a standalone binary/library that writes to the same SQLite schema, invoked by the CLI or desktop app.

### Option B: Language Server Protocol (LSP) as Unified Interface

Use LSP servers (which exist for all target languages) to extract symbols, references, and relationships.

| Aspect | Details |
|--------|---------|
| **Concept** | Launch an LSP server for the project, query it for symbols, call hierarchies, type hierarchies, and references |
| **Available data** | `textDocument/documentSymbol`, `textDocument/references`, `typeHierarchy`, `callHierarchy` |
| **Pros** | Unified interface; leverages existing mature tooling; no need to write parsers |
| **Cons** | LSP is designed for IDE interactions, not batch analysis; may be slow for large codebases; incomplete relationship data for some servers; no standardized "dependency" or "uses-in-impl" concept |

**Verdict:** LSP is insufficient alone but could be a supplementary data source.

### Option C: Tree-sitter Based Unified Parser

Use Tree-sitter grammars (available for all target languages) for syntactic parsing, combined with language-specific type resolution.

| Aspect | Details |
|--------|---------|
| **Concept** | Tree-sitter parses syntax trees fast; overlay with type information from language tools |
| **Pros** | Unified C library; incremental; grammars for 100+ languages; fast |
| **Cons** | Tree-sitter provides syntax only — no type resolution or cross-file references. Needs supplemental type analysis |
| **Hybrid** | Use tree-sitter for structure + language-specific resolvers for types/deps |

### Option D: Compile-Time Instrumentation / Build System Integration

Extract dependency data from build tools that already understand the project structure:

| Language | Build Tool Data |
|----------|----------------|
| Java | Maven/Gradle dependency graph + compiled bytecode reflection |
| Python | importlib metadata + static import analysis (e.g., `importlab`) |
| Go | `go list -json ./...` provides full module/package/import info |
| JS/TS | Module bundler graph (webpack/esbuild) + TypeScript project references |

**Pros:** Accurate, reflects actual build; fast for dependency info.
**Cons:** Less granular (typically package-level, not class-level).

---

## 4. Recommended Strategy: Hybrid with Language-Specific Frontends

```
┌──────────────────────────────────────────────────────┐
│                Language Frontends                      │
│  ┌──────┐ ┌──────┐ ┌────┐ ┌───────┐ ┌────────────┐ │
│  │ C++  │ │ Java │ │ Go │ │Python │ │  JS/TS     │ │
│  │Clang │ │JDT/  │ │go/ │ │Pyright│ │TS Compiler │ │
│  │      │ │JavaP.│ │ast │ │/ast   │ │  API       │ │
│  └──┬───┘ └──┬───┘ └─┬──┘ └──┬────┘ └─────┬──────┘ │
│     │        │       │       │             │         │
│     ▼        ▼       ▼       ▼             ▼         │
│  ┌──────────────────────────────────────────────┐    │
│  │      Common Intermediate Representation       │    │
│  │         (Extended ObjectStore / IR)            │    │
│  └──────────────────────────────────────────────┘    │
└──────────────────────────────────────────────────────┘
                         │
                         ▼
              ┌─────────────────────┐
              │   SQLite Database    │
              │ (extended schema)    │
              └─────────────────────┘
                         │
                         ▼
              ┌─────────────────────┐
              │  Visualization &     │
              │  Analysis (reused)   │
              └─────────────────────┘
```

---

## 5. Per-Language Breakdown

### 5.1 Java

**Parsing approach:** Use JavaParser (pure Java, no IDE dependency) or the Eclipse JDT Core in a standalone JVM process.

| Aspect | Mapping to Codevis Concepts |
|--------|----------------------------|
| Package | → `source_package` |
| Class/Interface/Enum | → `class_declaration` (UDT) |
| Method | → `method_declaration` |
| Field | → `field_declaration` |
| Import | → `includes` (file-level) or `uses_in_the_interface` |
| Inheritance (`extends`/`implements`) | → `class_hierarchy` |
| Maven module / Gradle subproject | → `source_package` (top-level) |
| `.java` file | → `source_file` + `source_component` |

**Filesystem mapping:** Maven convention `src/main/java/com/example/...` can auto-detect packages. The `FilesystemScanner` rules would be replaced by a Java-specific scanner.

**Integration:** A Java CLI tool (`codevis_create_java_db`) that outputs to the same SQLite schema. Could be written in Java (via JNI bridge or as a separate process that the C++ app invokes).

### 5.2 Python

**Parsing approach:** Python's `ast` module for structure; `Pyright` or `mypy` for type resolution; `importlab` for import graph.

| Aspect | Mapping |
|--------|---------|
| Module (`.py` file) | → `source_file` + `source_component` |
| Package (`__init__.py` dir) | → `source_package` |
| Class | → `class_declaration` |
| Function/Method | → `function_declaration` / `method_declaration` |
| Import | → `includes` |
| Inheritance | → `class_hierarchy` |
| Type annotations | → `uses_in_the_interface` |
| Runtime usage (in function body) | → `uses_in_the_implementation` |

**Challenges:**
- Dynamic typing means many relationships are invisible without type annotations
- `*` imports, monkey patching, metaprogramming reduce analysis accuracy
- Virtual environments define the package universe

**Integration:** A Python script (`codevis_create_python_db`) using ast + optional Pyright LSP for type data.

### 5.3 Go

**Parsing approach:** Go's standard library `go/ast`, `go/types`, `go/packages` provides everything needed.

| Aspect | Mapping |
|--------|---------|
| Module (`go.mod`) | → `source_repository` |
| Package (directory) | → `source_package` |
| `.go` file | → `source_file` |
| Struct/Interface | → `class_declaration` |
| Function | → `function_declaration` |
| Method (receiver) | → `method_declaration` |
| Import | → `dependencies` (package-level) |
| Interface satisfaction | → `class_hierarchy` |
| Field | → `field_declaration` |

**Advantages:** Go has explicit, simple dependency management. No circular imports allowed. `go/packages` provides fully typed ASTs.

**Integration:** A Go binary (`codevis_create_go_db`) that uses `go/packages` + `golang.org/x/tools` and writes SQLite directly (using `modernc.org/sqlite` for CGo-free builds).

### 5.4 JavaScript / TypeScript

**Parsing approach:** TypeScript Compiler API (`ts.createProgram`) for both JS and TS; provides full type checking for TS, partial for JS.

| Aspect | Mapping |
|--------|---------|
| npm package / workspace | → `source_package` |
| Module (`.ts`/`.js` file) | → `source_file` + `source_component` |
| Class | → `class_declaration` |
| Interface / Type alias | → `class_declaration` (UDT) |
| Function | → `function_declaration` |
| Import/Export | → `includes` |
| Extends/Implements | → `class_hierarchy` |
| Type references | → `uses_in_the_interface` |

**Challenges:**
- CommonJS vs ESM module systems
- Dynamic imports, re-exports, barrel files
- JavaScript without types = limited analysis
- Monorepo structures (Nx, Turborepo, Lerna)

**Integration:** A Node.js CLI tool (`codevis_create_ts_db`) using the TypeScript Compiler API. Could also use `ts-morph` for simpler API.

---

## 6. Schema Extensions Needed

To support multiple languages, the database schema should be extended:

```sql
-- Add language identifier to source files
ALTER TABLE source_file ADD COLUMN language TEXT DEFAULT 'cpp';

-- Add language to packages (useful for mixed-language projects)
ALTER TABLE source_package ADD COLUMN language TEXT DEFAULT 'cpp';

-- New relationship types for language-specific concepts
-- e.g., Python decorators, Go interface satisfaction, TS module re-exports
CREATE TABLE IF NOT EXISTS "language_specific_relation" (
    "id" integer PRIMARY KEY AUTOINCREMENT,
    "source_id" bigint NOT NULL,
    "target_id" bigint NOT NULL,
    "source_type" text NOT NULL,  -- 'class', 'function', 'file', etc.
    "target_type" text NOT NULL,
    "relation_kind" text NOT NULL, -- 'implements', 'decorates', 'satisfies', etc.
    "language" text NOT NULL
);
```

The existing `uses_in_the_interface` / `uses_in_the_implementation` / `class_hierarchy` tables are generic enough for most languages.

---

## 7. Integration Architecture Options

### 7.1 Separate Binaries (Recommended for Initial Implementation)

Each language frontend is a standalone binary that writes to the same SQLite database:

```
codevis_create_codebase_db      (C++ - existing)
codevis_create_java_db          (Java - new)
codevis_create_python_db        (Python - new)
codevis_create_go_db            (Go - new)
codevis_create_ts_db            (TypeScript - new)
```

**Pros:** Each can use its native ecosystem tools; no complex cross-language builds; can be developed independently.

**Cons:** Multiple binaries to distribute; coordination on schema.

### 7.2 Plugin-Based Parsers

Use the existing plugin system to load language parsers as plugins:

```
plugins/
  java_parser_plugin/
  python_parser_plugin/
  go_parser_plugin/
  ts_parser_plugin/
```

**Pros:** Single application; extensible by users.
**Cons:** Plugin API needs significant expansion to support full parsing workflows.

### 7.3 Unified Process with Embedded Runtimes

Embed language runtimes (JVM, Python, Go, Node) into the Codevis process.

**Verdict:** Too complex and fragile. Not recommended.

---

## 8. What Can Be Reused Directly

| Component | Reuse Level | Notes |
|-----------|:-----------:|-------|
| SQLite schema & DB layer | High | Same tables with minor extensions |
| `lvtldr` (graph loading) | Full | Loads generic nodes from DB |
| `lvtqtc` (visualization) | Full | Renders any node/edge graph |
| `lvtqtw` (UI widgets) | Full | Search, tree view, tabs work generically |
| `lvtprj` (project file) | Full | Zip container is language-agnostic |
| `lvtplg` / plugins | Full | Can host language-specific plugins |
| `lvtshr` (utilities) | Full | String helpers, enums, etc. |
| `lvtcgn` (code generation) | Low | Templates need rewriting per language |
| `lvtmdb` (object model) | High | Core types map to all languages |

---

## 9. What Needs Adapting Per Language

| Component | Adaptation Needed |
|-----------|-------------------|
| Parser/Scanner | Full rewrite using language-native tools |
| Filesystem Scanner | New package detection rules per ecosystem |
| Semantic Rules | New rules for language-specific third-party libs |
| Compilation database | Replace `compile_commands.json` with language equivalent (e.g., `tsconfig.json`, `go.mod`, `pom.xml`) |
| CLI entry points | New binaries or subcommands |
| Code generation templates | New templates per language |

---

## 10. Prioritization Recommendation

| Language | Effort | Value | Recommended Priority |
|----------|--------|-------|---------------------|
| **Go** | Low-Medium | High | 🥇 First — explicit deps, simple module system, excellent standard tooling (`go/packages`) |
| **Java** | Medium | High | 🥈 Second — very structured (Maven/packages), mature parsers (JavaParser) |
| **TypeScript** | Medium | High | 🥉 Third — TypeScript Compiler API is powerful; large potential user base |
| **Python** | Medium-High | Medium | 4th — Dynamic typing limits analysis quality without type annotations |
| **JavaScript** | High | Medium | 5th — Only after TypeScript; limited value without types |

---

## 11. Summary

The recommended approach is:

1. **Define a language-agnostic intermediate format** — the existing SQLite schema with minor extensions serves this purpose.
2. **Build language frontends as separate binaries** using each language's best-in-class analysis tools.
3. **Reuse the entire visualization, loading, and project management stack** unchanged.
4. **Start with Go** due to its simple, explicit module system and excellent standard library tooling.
5. **Evolve the plugin system** to allow community-contributed language parsers over time.
