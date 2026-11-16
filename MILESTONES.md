# Mímir — Milestones and Current Progress

**Status date:** 16 November 2026. **Project:** −1. **Current phase:** 0 — Mathematical Function Explorer. **Language:** C++11.

This file records **user-confirmed** microstep completion; it is not a claim that the assistant inspected local code. Only the **next** microstep is assigned. Detailed future steps will be designed gradually, never in huge batches.

## Phase 0 — Verified through learner reports

| Microstep | Tiny objective | Status |
| --- | --- | --- |
| **−1.0.0** | Create `mimir/` project directory | ✅ Learner reported done |
| **−1.0.1** | Create `src/` directory | ✅ Learner reported done |
| **−1.0.2** | Create `tests/` directory | ✅ Learner reported done |
| **−1.0.3** | Create empty `src/main.cpp` | ✅ Learner reported done |
| **−1.0.4** | Write minimal C++11 `main()` | ✅ Learner reported done |
| **−1.0.5** | Compile with `clang++ -std=c++11` | ✅ Learner reported done |
| **−1.0.6** | Run executable and inspect exit status `0` | ✅ Learner reported done |
| **−1.0.7** | Add the standard `<iostream>` header | ✅ Learner reported done |
| **−1.0.8** | Add `std::cout` greeting to `main()` | ✅ Learner reported done |
| **−1.0.9** | Recompile modified executable | ✅ Learner reported done |
| **−1.0.10** | Execute and check `Hello, Mimir!` | ✅ Learner reported done |
| **−1.0.11** | Create empty `Makefile` | ✅ Learner reported done |
| **−1.0.12** | Add first Make target line `mimir:` | ✅ Learner reported done |

## The single next microstep

**−1.0.13 — Introduce the first Make recipe.**

- This step is **not yet started**.
- As agreed, the assistant should teach one tiny addition to the existing Makefile, explain the role of the **recipe**, and stop for the learner to try it.
- Do not generate a complete Makefile, source file or tests.
- Teaching note: because the `mimir` executable already exists, a target with no prerequisites may be considered up-to-date; the later lesson should explicitly teach how prerequisites affect rebuilding, rather than treating the lack of execution as a mysterious failure.

## Documentation milestone

The educational scope was expanded from the original calculus-only focus to a **dual-track mathematical engine + deep C++ curriculum**, benchmarked against three Stroustrup books. See `ROADMAP.md` and `CPP_CURRICULUM.md`. **Documentation changes do not advance the coding microstep number.**

## Progress recording rules

1. Only mark a step complete after the learner reports success or provides checkable evidence.
2. If the learner encounters an error, work on **that same** microstep rather than moving ahead.
3. Record a small check, expected result or Git reference *when available*. Don't invent tests, tags or commits.
4. Prefer one microstep per interaction, however tiny; subdivide whenever the learner wants.
5. Do not mark C++ mastery topics completed solely because their syntax appears in the program.
6. At an appropriate future step, initialize Git and begin committing completed microsteps; no such step is claimed yet.
