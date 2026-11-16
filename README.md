# Mímir — C++ Mastery Through Mathematical Computing

**Project −1** of an 11-project, dependency-free C++ learning journey leading toward a small, trainable GPT-like language model.

## Mission

Build a real **Calculus & Numerical Optimization Engine** while pursuing a deep, rigorous education in C++: foundational programming, advanced language concepts, the standard library, abstraction and generic programming, memory and resource safety, compilation, concurrency, performance, and software engineering.

Our ambition is practical depth and topic breadth **comparable to, and potentially deeper through hands-on work than, the combined scope** of three books by Bjarne Stroustrup:

1. *Programming: Principles and Practice Using C++*, **3rd edition** (2024).
2. *The C++ Programming Language*, **4th edition** (2013).
3. *A Tour of C++*, **3rd edition** (2022).

This is a **learning benchmark**, not a claim that Mímir already covers the books, a chapter-by-chapter reproduction, or a guarantee of mastery. Actual coverage and evidence will be recorded in [CPP_CURRICULUM.md](CPP_CURRICULUM.md).

## Two learning paths within one project

**A. Mathematical application:** twelve phases (0–11) building an increasingly useful CLI: functions, limits, differentiation, derivative verification, roots, one-variable optimization, numerical integration, introductory ODEs, Taylor series, numerical stability and an integrated workbench. See [ROADMAP.md](ROADMAP.md).

**B. C++ mastery:** concept lessons, bite-size exercises, compiler/debugger experiments, tests, code-reading and independent *companion labs* for topics that do not reasonably belong in the engine. See [CPP_CURRICULUM.md](CPP_CURRICULUM.md).

## Constraints

- **C++11 first** for the complete original numerical engine, followed by verified modernization **C++14 → C++17 → C++20 → C++23**; C++26 optional when practical.
- **C++ standard library only** in code: no third-party ML, numerical, GUI or testing frameworks. Companion labs are also standard-library-only.
- Confirmed environment: **macOS**, **Apple Clang 21.0.0**, **GNU Make 3.81**.
- **GNU Make**, no CMake requirement; grow the `Makefile` in tiny steps.
- Start with the terminal, not Qt or a graphical interface.
- **No upper limit** on tiny learning steps. Never inflate the real numerical engine with unrelated features just to practice them.

## Teaching contract

Read [AGENTS.md](AGENTS.md) before implementation assistance. It is copied **unchanged** from the learner's uploaded `AGENTS.txt`.

**The learner writes implementations.** The assistant teaches, asks guiding questions, reviews learner-written code and provides only tiny illustrative examples (normally 2–5 lines), not complete functions or files. One tiny, verifiable task at a time; progress is based on understanding, not amount of code generated. Early setup steps need only appropriate setup checks; meaningful code behavior will be tested when feasible.

## Boundaries

Later Projects 0–9 cover an XOR neural network, automatic differentiation, matrices/tensors, optimization, neural networks, tokenization, a tiny language model, self-attention, Transformers and mini GPT. Mímir does **not** build them. Its own numerical methods are primarily one-dimensional; its introductory ODE solver does not expand into a PDE or CFD system.

For comprehensive C++ study, unrelated subjects such as advanced inheritance, custom allocators, regular expressions, low-level storage, concurrency, modules or coroutines can be practiced in **small isolated labs**.

## Documentation index

| File | Role |
| --- | --- |
| [AGENTS.md](AGENTS.md) | Primary teaching guidelines; preserved verbatim |
| [README.md](README.md) | Name, mission and constraints |
| [ROADMAP.md](ROADMAP.md) | Mathematical phases plus the two-path structure |
| [CPP_CURRICULUM.md](CPP_CURRICULUM.md) | Expanded C++ coverage, progression and mastery checks |
| [DEVELOPMENT.md](DEVELOPMENT.md) | Six decisions, incremental development and modernization |
| [CODING_STANDARDS.md](CODING_STANDARDS.md) | Naming, safety, design and readability |
| [TESTING.md](TESTING.md) | Numerical, software and C++-concept verification |
| [MILESTONES.md](MILESTONES.md) | Progress through the last learner-confirmed microstep |
| [SESSION_HANDOFF.md](SESSION_HANDOFF.md) | Current session checkpoint, precise next action and fresh-chat instructions |

## Current state — 16 November 2026

**User-reported progress:** Phase 0, Steps **−1.0.0 through −1.0.32** have been covered; **−1.0.32 is explicitly confirmed DONE**. Our precise **next uncompleted step is −1.0.33** (use the existing `CXX` variable in the compilation recipe). The assistant has not inspected the learner’s local files; see [MILESTONES.md](MILESTONES.md) for the step history and verification caveats.

```text
mimir/
├── Makefile              # includes CXX definition, target, dependency and recipe
├── src/
│   └── main.cpp          # prints "Hello, Mimir!"
├── tests/                # no test source confirmed yet
└── mimir                 # locally compiled executable; may also have mimir.dSYM
```

Current **reported Makefile state**: `CXX = clang++` above `mimir: src/main.cpp`; recipe still invokes `clang++` directly with `-std=c++11 -Wall -Wextra -Wpedantic -g -O0`. This build was successfully tested via `make -B`. **Do not assume** `$(CXX)` is already used: that is the next tiny learner action.

To transfer to another chat, read [SESSION_HANDOFF.md](SESSION_HANDOFF.md) and attach the documentation files. **This documentation package does not modify or replace the learner's `Makefile`, C++ source, executable or tests.**
## References

- [Programming: Principles and Practice Using C++, 3rd ed.](https://www.stroustrup.com/programming.html)
- [The C++ Programming Language, 4th ed.](https://www.stroustrup.com/4th.html)
- [A Tour of C++, 3rd ed.](https://www.stroustrup.com/tour3.html)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
- [cppreference](https://en.cppreference.com/)
