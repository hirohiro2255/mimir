# Mímir — Development Process and Decisions

## Purpose

Preserve our **six original decisions** while adding the more ambitious C++ mastery curriculum. The original numerical engine, slow incremental workflow and learner-authored coding contract are unchanged.

## Decision 1 — Environment (confirmed)

- **macOS**; **Apple Clang 21.0.0**; **GNU Make 3.81**.
- **C++11 initially**, using `-std=c++11`. Later compiler modes are introduced sequentially and only when scheduled.
- Initial suggested warnings/debugging options: `-Wall -Wextra -Wpedantic -g -O0` (we will introduce and understand flags gradually).
- Grow a **minimal Makefile** one rule/setting at a time. No CMake requirement.
- Debuggers, sanitizers, profilers and feature probes are later *developer tools*, not added runtime libraries.

## Decision 2 — Testing

- Begin with plain C++11 `if` checks and meaningful failure exit codes.
- Add a tiny homegrown test harness only when repetition warrants one; no third-party test framework.
- Eventually have a separate test executable and `make test`.
- Use analytical references, suitable tolerances and explicit failures in numerical tests.
- For C++ mastery, also verify understanding with code predictions, compiler diagnostics, lifetime/ownership reasoning and tiny learner-written labs.
- Full policy: [TESTING.md](TESTING.md).

## Decision 3 — Project structure and Git

- One Git repository, initially the `main` branch. Commit each *completed, verified* microstep **after Git is initialized**; tag phase and C++-standard checkpoints.
- Numerical source in `src/`, tests in `tests/`; headers beside `.cpp` files until separate `include/` makes sense.
- A separate **`labs/` directory is optional and introduced only when needed** for advanced C++ concepts that don't belong in the numerical CLI.
- Use `.gitignore` for generated programs, object files and transient artifacts when appropriate.
- Do not pretend commits, tags or test suites already exist. Documentation does not modify source code.

## Decision 4 — Code style

- C++ Core Guidelines for design/safety, LLVM-inspired formatting and the specific conventions in [CODING_STANDARDS.md](CODING_STANDARDS.md).
- Prefer straightforward design over showcasing advanced syntax unnecessarily.

## Decision 5 — Numerical correctness

- `double` by default; justified absolute/relative tolerances.
- Known analytical results; convergence/error analysis; failure and non-finite handling.
- Keep math separate from I/O when decomposition becomes useful.
- See [TESTING.md](TESTING.md).

## Decision 6 — Tiny-step teaching workflow

[AGENTS.md](AGENTS.md) is copied **verbatim** from the learner's uploaded `AGENTS.txt` and remains the **primary rulebook for coding assistance**.

**The learner writes implementations.** The assistant teaches, asks what was tried, provides hints, reviews code, explains why, and illustrates concepts using only very short snippets (normally **2–5 lines**). No full implementations, large auto-refactors or automatic completion of TODOs.

Each microstep has:

1. A single, *very small* learning objective.
2. One tiny learner action or experiment.
3. A concrete check or observation.
4. A stop point; move on only when the learner is ready.

Where appropriate for new behavior: explain → focused learner-written failing test → minimal learner-written implementation → verification → small refactor → commit. It is fine for setup steps to use `ls`, compilation or terminal output as their check **before tests/Git infrastructure exists**. A deliberately red test may exist during work, but completed behavior should restore a green baseline.

A microstep may be shorter than a function or feature. The learner's understanding matters more than pace. A single step can span multiple conversations or days.

## New agreement — Serious C++ mastery

Mímir now has two complementary paths:

- **Core application:** retain the original twelve mathematical phases (0–11) and build a usable C++11 CLI.
- **C++ mastery:** develop practical breadth/depth benchmarked against three Stroustrup books, using focused C++11 labs and later C++14/17/20/23 labs. See [CPP_CURRICULUM.md](CPP_CURRICULUM.md).

**There is no arbitrary maximum microstep count.** Topic exposure alone is not mastery. An important concept should eventually be explained, independently applied, analyzed for errors/limitations and transferred to a different example. We may revisit subjects multiple times.

Some topics—advanced template techniques, deep inheritance, low-level memory, concurrency, modules/coroutines—belong better in **self-contained laboratories**, not the main numerical engine. Do not distort architecture to satisfy a curriculum checklist.

## Definition of Done appropriate to the stage

**Early setup milestone:** the requested file, directory, command or observation is verified and understood. No requirement for Git/tests before those facilities exist.

**Meaningful implementation milestone once infrastructure exists:**
- Learner explains the behavior and why the change is correct.
- Focused and regression tests pass; test-first where practical.
- Compiler warnings and unexpected failures are understood/addressed.
- Numerical comparisons are grounded and valid when applicable.
- Code is clear and appropriately small; commit completed work.

**C++ curriculum topic:** the learner can explain it, implement an independent tiny example, diagnose a common problem, compare alternatives and justify appropriate use. Use the 0–4 competence rubric in [CPP_CURRICULUM.md](CPP_CURRICULUM.md).

## Scope and progress control

- Do not add entire features, directories or test infrastructure ahead of their teaching step.
- Preserve mathematical boundaries: no tensors, automatic differentiation, neural network, language model, GPU or CFD inside Mímir.
- Record **confirmed** progress in [MILESTONES.md](MILESTONES.md).
- Current checkpoint (16 November 2026): **−1.0.12 completed**; **−1.0.13 next**. The current `Makefile` only has `mimir:`.
- When documentation changes, distinguish *planning* from *implemented/tested* functionality.

## Modernization after the completed C++11 baseline

Complete and tag the C++11 engine before upgrades. Proceed **C++14 → C++17 → C++20 → C++23**, optionally C++26 later.

At each transition:

1. Verify and tag the prior baseline.
2. Compile and test the *unchanged* code in the new standard mode.
3. Study one new feature in an isolated tiny experiment.
4. Confirm actual **compiler and standard-library** support.
5. Apply only one small, justified behavior-preserving refactor if useful.
6. Rerun regression/numerical checks, explain tradeoffs and commit.

Newer syntax is **not automatically** better. Keep version-specific labs separate when modifying the engine would add complexity.
