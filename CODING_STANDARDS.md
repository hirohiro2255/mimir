# Coding Standards — Project −1

## Sources of guidance
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines): safety, ownership, interfaces, and maintainability.
- [LLVM Coding Standards](https://llvm.org/docs/CodingStandards.html): inspiration for consistent readable formatting.
- These are **project-specific conventions**, not a claim to reproduce either guide verbatim.

## Names and layout
| Element | Convention | Example |
| --- | --- | --- |
| Variables | `snake_case` | `learning_rate` |
| Functions | `snake_case` | `calculate_derivative` |
| Types/classes/structs | `PascalCase` | `GradientDescentResult` |
| Named constants | `kPascalCase` | `kDefaultIterations` |
| Private data members | trailing `_` | `current_value_` |
| Namespaces | `snake_case` | `numerical_math` |
| Files | `snake_case.cpp` / `.hpp` | `gradient_descent.cpp` |

- Four spaces for indentation; opening braces on the same line.
- Aim for 100-column lines, but favor readability over rigid wrapping.
- Prefer small focused functions and meaningful names.
- Separate numerical calculations from terminal input/output when the need emerges.
- Prefer `const` for values that should not change.

## Design and safety
- Prefer ordinary values, standard containers, and RAII; avoid owning raw pointers.
- Make resource ownership and function preconditions clear.
- Avoid premature inheritance, templates, frameworks, and elaborate architecture.
- Handle invalid arguments and non-convergence explicitly.
- Document numerical assumptions, domains, and tolerances.
- Avoid introducing C++14+ constructs during the C++11 implementation.
- Refactor in small behavior-preserving changes with tests.

## Formatting automation
A minimal `.clang-format` configuration based on LLVM may be introduced when useful. Formatting tools are optional developer tooling, not runtime dependencies. Verify local tool support before standardizing it.
