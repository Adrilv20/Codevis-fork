# Codevis Architecture Overview

## 1. Purpose

Codevis is a **C++ code analysis and visualization tool** that generates a graph representation of a codebase's logical and physical dependencies. It is based on John Lakos' concepts of physical design (packages, package groups, components) and logical design (classes, namespaces, dependencies).

---

## 2. High-Level Architecture

The system has three major layers:

```
┌─────────────────────────────────────────────────────────┐
│                   Desktop Application                    │
│   (lvtqtw, lvtqtd, lvtqtc, lvtcgn, lvtmdl, lvtclr)    │
├─────────────────────────────────────────────────────────┤
│                Data & Loading Layer                      │
│          (lvtldr, lvtmdb, lvtprj, lvtshr)               │
├─────────────────────────────────────────────────────────┤
│               Parsing / Analysis Layer                   │
│                  (lvtclp, cliapps)                       │
│          [libclang / LLVM tooling based]                 │
└─────────────────────────────────────────────────────────┘
                         │
                    SQLite Database
                  (database-spec/cad_db.sql)
```

---

## 3. Module Breakdown

### 3.1 Parsing Layer (`lvtclp`)

The core analysis engine. It uses **Clang's LibTooling** API to parse C++ source code.

| Component | Responsibility |
|-----------|---------------|
| `CppTool` | Orchestrator — wraps the full parsing pipeline (physical scan → logical scan) |
| `FilesystemScanner` | Scans the filesystem to identify packages, components, and files following Lakosian naming rules or configurable semantic rules |
| `DepScanActionFactory` / `PhysicalDepScanner` | Clang FrontendAction that scans `#include` directives to build the physical dependency graph |
| `LogicalDepActionFactory` / `LogicalDepScanner` | Clang FrontendAction + `RecursiveASTVisitor` that walks the AST to extract classes, namespaces, inheritance, usage relationships |
| `LogicalDepVisitor` | The core AST visitor — implements callbacks for `CXXRecordDecl`, `FunctionDecl`, `FieldDecl`, `VarDecl`, `EnumDecl`, etc. |
| `HeaderCallbacks` | Clang `PPCallbacks` implementation to track `#include` relationships |
| `ToolExecutor` | Multi-threaded execution of Clang actions across multiple translation units |
| `fortran/` | Experimental Fortran scanner (uses Clang's compilation database for C-interop Fortran) |

**Key dependency:** LLVM/Clang libraries (AST, Tooling, Frontend, Basic).

### 3.2 In-Memory Database (`lvtmdb`)

An in-memory object store that models the code entities found during parsing:

- `ObjectStore` — top-level container for all objects
- Entity types: `TypeObject`, `NamespaceObject`, `PackageObject`, `ComponentObject`, `FileObject`, `FunctionObject`, `MethodObject`, `FieldObject`, `VariableObject`, `RepositoryObject`
- Relationships are stored as pointers between objects
- `SociReader` / `SociWriter` — serialize/deserialize to/from SQLite using the SOCI library

### 3.3 Persistent Database (SQLite)

Schema defined in `database-spec/cad_db.sql`. Key tables:

| Table | Content |
|-------|---------|
| `source_repository` | Top-level repos |
| `source_package` | Packages (hierarchical via `parent_id`) |
| `source_component` | Components (grouped files) |
| `source_file` | Individual source/header files |
| `class_declaration` | Classes/structs/enums (UDTs) |
| `namespace_declaration` | Namespaces |
| `method_declaration` / `function_declaration` | Methods and free functions |
| `field_declaration` / `variable_declaration` | Fields and variables |
| `includes` | Physical include dependencies (file→file) |
| `dependencies` | Package-level dependencies |
| `component_relation` | Component-level dependencies |
| `class_hierarchy` | Inheritance (IsA) |
| `uses_in_the_interface` / `uses_in_the_implementation` | Logical usage relationships |

### 3.4 Data Loading Layer (`lvtldr`)

Loads entities from the database into graph nodes for the UI:

- `LakosianNode` / `LakosianEdge` — abstract graph node/edge types
- Concrete: `PackageNode`, `ComponentNode`, `TypeNode`, `FreeFunctionNode`, `RepositoryNode`
- `NodeStorage` — manages loaded nodes and their lifecycle
- `GraphLoader` / `PhysicalLoader` — queries the DB and constructs the graph

### 3.5 Desktop Application (Qt/KDE)

| Module | Responsibility |
|--------|---------------|
| `lvtqtc` | Qt Graphics Scene entities — visual representation of Lakosian nodes/edges, undo/redo, layout algorithms, tools |
| `lvtqtw` | Qt Widgets — tabbed views, search, configuration dialogs, namespace tree, export, parsing UI |
| `lvtqtd` | Qt application (main window, menus, etc.) |
| `lvtmdl` | Data models for Qt views |
| `lvtclr` | Color scheme management |
| `lvtcgn` | Code generation from the graph (using JavaScript templates) |
| `desktopapp` | Main application entry point |

### 3.6 Plugin System (`lvtplg`, `plugin_system`)

Two plugin mechanisms:

1. **Legacy plugin system (`lvtplg`):** C++ shared library plugins + Python plugin support via embedded interpreter. Auto-generated bindings.
2. **New plugin system (`plugin_system`):** Interface-based (`ICodevisPlugin`, `IGraphicsLayoutPlugin`, `IGraphicsSceneManagementPlugin`, etc.) with `PluginManagerV2`.

Plugins can provide custom layouts, scene manipulation, code analysis rules, etc.

### 3.7 Semantic Rules (`semrules/`)

Python scripts that map filesystem paths to packages for known third-party libraries (Qt, Boost, LLVM, SDL, etc.). Each script has:
- `accept(path)` → returns True if the path belongs to this library
- `process(path, addPkg)` → registers packages for the matched path

### 3.8 CLI Applications (`cliapps/`)

| Binary | Purpose |
|--------|---------|
| `codevis_create_codebase_db` | Parse a C++ project and generate the SQLite database |
| `codevis_merge_database` | Merge multiple databases |
| `codevis_dump_database` | Dump database contents |
| `codevis_physical_loader` | Load physical entities |
| `codevis_create_prj_from_db` | Create a project file from a database |

### 3.9 Shared Utilities (`lvtshr`)

Common utilities: string helpers, graph enums, fuzzy matching, iterators, zip file handling, unique IDs.

### 3.10 Project File (`lvtprj`)

Manages the `.lks` project file format (a zip file containing the SQLite database and layout state).

---

## 4. Data Flow

```
Source Code + compile_commands.json
        │
        ▼
  FilesystemScanner  ──► Identify packages, components, files
        │
        ▼
  PhysicalDepScanner ──► Parse #includes → physical deps
        │
        ▼
  LogicalDepScanner  ──► Walk AST → classes, functions, relationships
        │
        ▼
  ObjectStore (in-memory) ──► SociWriter ──► SQLite DB
        │
        ▼
  GraphLoader / NodeStorage ──► Load into UI graph
        │
        ▼
  Qt Graphics Scene  ──► Render, layout, interact
```

---

## 5. Key Dependencies

| Dependency | Version | Purpose |
|------------|---------|---------|
| LLVM/Clang | 21.x (preferred) | C++ AST parsing |
| Qt 6 | Required | GUI framework |
| KDE Frameworks 6 | Required for desktop app | UI widgets, config, crash handler |
| SQLite 3 | Required | Persistent storage |
| SOCI | Bundled (thirdparty) | Database abstraction |
| Boost (graph) | Required for desktop | Graph algorithms |
| Catch2 | Optional | Testing |
| libzip | Required | Project file compression |

---

## 6. Areas That May Need Updating

### 6.1 LLVM/Clang Version Coupling
- The tool is tightly coupled to specific Clang APIs (`RecursiveASTVisitor`, `FrontendAction`, `CompilationDatabase`). Each new LLVM major version may introduce breaking API changes.
- The hardcoded preferred version (`21.1.5`) in CMakeLists.txt needs regular updates.

### 6.2 SOCI Library
- The CMakeLists.txt notes that SOCI "does not have a good policy regarding releases" and has C++ antipatterns. Migration to QtSql or another ORM is mentioned as future work.

### 6.3 Qt 5 → Qt 6 / KDE 5 → KDE 6 Migration
- The code has been migrated to Qt6/KF6 but may still have residual compatibility code.

### 6.4 Plugin System Duplication
- Two plugin systems coexist (`lvtplg` legacy + `plugin_system` new interface-based). Consolidation would reduce complexity.

### 6.5 Fortran Support (Experimental)
- The Fortran scanner exists but is gated behind `ENABLE_FORTRAN_SCANNER` and appears incomplete.

### 6.6 Build System Complexity
- Complex CMake setup with many optional features, platform-specific handling, and KDE ECM integration. Could benefit from simplification or documentation.

### 6.7 Catch2 Version Handling
- Code handles both Catch2 v2 and v3 APIs, adding maintenance burden.

### 6.8 Semantic Rules Scalability
- The `semrules/` system uses individual Python scripts per library. A more structured configuration format might be more maintainable.

### 6.9 Database Schema Evolution
- No visible migration system for the SQLite schema. Schema changes could break existing `.lks` project files.

### 6.10 Thread Safety
- `lvtmdb` has `Lockable` base class and `ThreadStringMap` suggesting manual thread synchronization. Could benefit from modern concurrency patterns.
