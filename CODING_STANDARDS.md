# Mímir — Coding Standards and C++ Design Principles

These are **project-specific conventions**, inspired by the [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines) and [LLVM Coding Standards](https://llvm.org/docs/CodingStandards.html). They are not wholesale copies. Style should support learning, not create needless refactoring work.

## Names and layout

| Element | Convention | Example |
| --- | --- | --- |
| Variables, parameters, functions | `snake_case` | `learning_rate`, `find_root` |
| Namespaces and files | `snake_case` | `numerical_math`, `root_finding.cpp` |
| Classes/structs/type aliases | `PascalCase` | `IntegrationResult` |
| Named constants | `kPascalCase` | `kMaxIterations` |
| Private data members | trailing underscore | `current_value_` |

- Four spaces of indentation; opening braces on the same line; soft target of 100 columns.
- Meaningful names and small cohesive functions. Document unusual numerical assumptions.
- A `.clang-format` file may be introduced later **as its own tiny step**. It is optional developer tooling.

## C++11-first correctness

- Use only C++11 features in the original engine until scheduled modernization.
- Learn initialization forms and conversion rules; use explicit initialization when it clarifies intent and avoids narrowing.
- Apply `const` and (where valid) C++11 `constexpr` deliberately; know the semantic difference.
- Qualify standard names with `std::`; avoid `using namespace std;` in headers.
- Include the headers actually required; understand declarations, definitions and ODR instead of relying on accidental transitive includes.
- Prefer `std::string`, `std::vector`, `std::array` and appropriate standard-library containers over manual raw storage.
- Understand signed/unsigned conversion, integer overflow, floating-point behavior, bounds and invalid input; never silently depend on undefined behavior.

## Objects, lifetime and resource safety

- Prefer **values and RAII**. Learn and favor the Rule of Zero; understand Rule of Three/Five when manually managing resources.
- Raw pointers and references normally express **non-owning** relationships; make ownership unambiguous.
- Use `std::unique_ptr` for exclusive dynamic ownership only when necessary; `std::shared_ptr` only for genuine sharing.
- Avoid owning raw pointers, unmanaged `new`/`delete`, dangling references, unchecked indexing and invalid iterators in engine code.
- Study copy/move semantics, valid moved-from states, temporary lifetime and exception safety through tiny labs.

## Classes, templates and abstractions

- Start with ordinary functions and data. Introduce classes/templates where they enforce invariants or remove meaningful duplication.
- Prefer composition to inheritance when no substitutable interface is needed.
- Favor standard algorithms when they make intent clearer; understand iterator requirements and invalidation.
- Keep interfaces narrow and preconditions explicit. Avoid unnecessarily implicit conversions, heavy macros and elaborate metaprogramming.
- Learn complex mechanisms (virtual inheritance, advanced traits, custom allocators and so forth) in **small companion labs** if they don't improve Mímir's numerical engine.

## Errors and numerical algorithms

- Distinguish invalid user input, numerical non-convergence and programmer-invariant failures.
- Study assertions, exceptions, result/status designs and guarantees rather than dogmatically choosing one.
- Clearly report invalid domains, failure to bracket a root, insufficient precision and iteration exhaustion.
- Use `double` by default, validate tolerances and record algorithm assumptions. Do not conflate bit-for-bit equality with acceptable numerical agreement.
- Separate mathematical computation from terminal I/O when useful.

## Concurrency, benchmarking and modernization

- Prefer correct sequential code until concurrency brings a real benefit; study threads/atomics in isolated labs.
- Test performance with reproducible inputs and appropriate build modes; distinguish measurement noise from meaningful speedups.
- Introduce C++14/17/20/23 features sequentially **after completing/tagging the C++11 baseline**. Verify compiler and library support first.
- A modern language construct does not belong in the engine solely to fulfill a checklist. Each refactor should be small, justified and regression-tested.

## Teaching policy

The learner writes implementations. The assistant offers concept explanations, targeted review and at most tiny illustrative snippets following [AGENTS.md](AGENTS.md). No automatic whole-file refactors.
