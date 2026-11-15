# Development Process and Decisions

## Decision 1 — Environment (confirmed)
- macOS; Apple Clang 21.0.0; GNU Make 3.81.
- Initial language mode: `-std=c++11`.
- Compiler warnings: `-Wall -Wextra -Wpedantic`.
- Initial debug options: `-g -O0`.
- The user's C++11 smoke test compiled and ran successfully.
- Use a simple Makefile; expand it only as needed. No CMake requirement.

## Decision 2 — Testing approach
- Begin with plain C++11 `if`-based tests and a nonzero exit status on failure.
- Grow a tiny homegrown test harness only when duplication warrants it.
- `make test` is the intended standard test command once the test target exists.
- No third-party testing framework.
- See [TESTING.md](TESTING.md).

## Decision 3 — Structure and Git
- One Git repository for Project −1; start with a single `main` branch.
- Keep implementation in `src/` and tests in `tests/`; headers can live beside sources until a separate include tree is useful.
- Commit each completed, verified micro-milestone.
- Tag significant phase completions and C++ standard baselines, not every microstep.
- Exclude generated executables and other build artifacts from Git.

## Decision 4 — Coding style
- Use C++ Core Guidelines for design/safety, LLVM-inspired formatting, and the project's conventions in [CODING_STANDARDS.md](CODING_STANDARDS.md).

## Decision 5 — Numerical correctness
- Start with `double`; use justified absolute/relative tolerances, known analytical references, convergence tests, and explicit failure handling.
- See [TESTING.md](TESTING.md).

## Decision 6 — Tiny-step teaching and completion
The uploaded [AGENTS.md](AGENTS.md) is the primary teaching-assistance reference. **The learner writes the implementation.**

For each microstep:
1. Explain one tiny concept and expected behavior.
2. Specify one small task and an acceptance check.
3. Let the learner attempt it; ask what they tried when they need help.
4. Give hints or tiny illustrative snippets (typically 2–5 lines), not complete functions/files.
5. Review the learner's code and debug with guiding questions.
6. Build, run, and verify appropriate tests; refactor only a small part if necessary.
7. Commit once the completed milestone is working and understood.

A microstep can be smaller than a function or feature. Do not advance just because code compiles; the learner should understand the math, code, and verification. Keep a runnable baseline at each **completed** milestone; a deliberately failing TDD test may exist temporarily while a step is in progress.

## Definition of Done
- Learner can explain the relevant concept and implementation.
- New behavior is tested; use test-first where practical.
- Project builds in the agreed language mode without unexpected warnings.
- Existing tests pass, and the executable demonstrates the behavior.
- Numerical results are verified where relevant; failures are not silently reported as success.
- Code follows project conventions.
- The completed milestone is committed to Git.

## Scope control
- Keep the current microstep fixed. New ideas go into a future milestone, not a surprise expansion.
- Track progress in `MILESTONES.md` once Phase 0 is planned.
- Separate implementation, behavior-preserving refactoring, and behavior-changing optimization.

## C++ modernization after the full C++11 engine
Upgrade sequentially: C++11 → C++14 → C++17 → C++20 → C++23, with C++26 optional later. At each upgrade: verify the old baseline, compile unchanged code under the new mode, choose one genuinely useful language feature, refactor the smallest relevant part, rerun all tests and numerical checks, and commit. Preserve earlier versions with Git tags. Newer syntax is not automatically better.
