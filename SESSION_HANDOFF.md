# Mímir — Session Handoff

**Snapshot date:** 16 November 2026  
**Purpose:** Transfer the complete working context into a **new ChatGPT conversation** and resume at the correct single microstep.  
**Status:** Documentation-only handoff; no C++ source, Makefile or tests were edited by the assistant.

## 1. Resume here — most important

- **Project:** Mímir, Project −1 in an 11-project C++ learning journey toward a tiny GPT-like model.
- **Current phase:** 0 — Mathematical Function Explorer.
- **Last explicitly learner-confirmed microstep:** **−1.0.32 — Add `CXX = clang++` above the Make target.** The learner replied `DONE`.
- **Exactly next, not yet completed:** **−1.0.33 — Reference the `CXX` variable in the recipe.** The previous assistant explained this step; the learner has *not* replied `DONE` to it.
- **Action for next assistant:** Resume **−1.0.33 only**; ask the learner to replace the literal leading `clang++` in the existing Make recipe with `$(CXX)`, keeping everything else unchanged, then pause for confirmation. **Do not skip to −1.0.34 or produce a whole Makefile.**
- **Small concept check already posed:** If `CXX = g++`, which compiler will the recipe invoke when it runs? The learner has not answered yet.

## 2. Current working state (reported, not inspected)

The learner is on **macOS**, with **Apple Clang 21.0.0** and **GNU Make 3.81**. Current language mode is **C++11**; warning/debug options currently used: `-Wall -Wextra -Wpedantic -g -O0`.

The learner has created `mimir/`, `src/`, `tests/`, and `src/main.cpp`. The source contains a small `main()` with `<iostream>` and `std::cout` printing `Hello, Mimir!`. It has been compiled and run successfully. A `mimir.dSYM` directory was observed when using `-g` on macOS.

The current **reconstructed** Makefile is:

```makefile
CXX = clang++

mimir: src/main.cpp
	clang++ -std=c++11 -Wall -Wextra -Wpedantic -g -O0 src/main.cpp -o mimir
```

The command line starts with a **real TAB** in the actual Make recipe, as introduced at Step −1.0.13. `make` demonstrated timestamp-based incremental behavior; `touch src/main.cpp` triggered a rebuild; `make -B` forced compilation; `make -B` with the full six-option configuration succeeded without warnings. **The compiler variable is defined but the recipe still uses the literal executable name.**

No learner-written test files, Git initialization/commits, additional source files, or functioning math algorithms have been confirmed. `tests/` was created but there is no test harness yet. The first mathematical functionality remains ahead.

**Evidence caveat:** These facts come from the conversation and explicit learner reports, **not** from the assistant opening the learner's Mac files. Two earlier milestones (−1.0.19 and −1.0.22) were taught without separately recorded command outputs; those lessons were subsequently followed by confirmed progress. See [MILESTONES.md](MILESTONES.md).

## 3. The non-negotiable teaching agreement

Read [AGENTS.md](AGENTS.md) **first**. It is an unchanged copy of the learner's `AGENTS.txt`. Its primary instruction is **teaching assistant, not code generator**:

- **The learner writes code.** Explain concepts, give hints, review user-written code, ask guiding debugging questions, explain why.
- Illustrative examples normally **2–5 lines**; do not write full functions, entire Makefiles, whole implementations, completed TODOs or broad refactors.
- **One extremely tiny step per exchange**, even when a step only changes one flag or one token. Explain → learner action → concrete check → stop and wait.
- Introduce tests/TDD when meaningful; scaffolding steps can be checked with terminal output. Do not pretend test infrastructure or Git exists already.
- The learner can ask conceptual questions at any point; answer them without accidentally advancing the microstep.

## 4. Goals and long-term constraints

**Two complementary paths, not two unrelated projects:**

1. **Mathematical engine:** 12 C++11 phases (0–11): function explorer; limits/precision; numerical derivatives; derivative verification; roots; 1D gradient descent; optimization experiments; integration; scalar ODEs; Taylor series; floating-point stability; integrated CLI/workbench.
2. **Deep C++ mastery:** use the combined breadth/depth of Bjarne Stroustrup's *Programming: Principles and Practice Using C++* (3rd), *The C++ Programming Language* (4th), and *A Tour of C++* (3rd) as a **study benchmark**. Up to 20 C++11 subject tracks and subsequent modernization tracks, with tiny companion labs for unrelated advanced language topics. No arbitrary upper bound on steps; conceptual mastery requires evidence.

- C++ standard library only; GNU Make instead of CMake; primarily terminal-based. No external mathematical, ML or testing frameworks.
- **C++11 first**, build and test the full engine, then modernize the same project **C++14 → C++17 → C++20 → C++23** (C++26 optional if supported) in tiny verified changes, keeping checkpoints in Git once initialized.
- Preserve the mathematical scope, avoid imposing unrelated architectures or GUI, and keep future Projects 0–9 (autograd, tensors, neural networks, GPT) outside Mímir.
- Naming/style: 4-space C++ indentation; `snake_case` functions/variables/files, `PascalCase` types, `kPascalCase` constants; see [CODING_STANDARDS.md](CODING_STANDARDS.md).

## 5. Documentation source of truth and hierarchy

Read these files when supplied, in this order:

1. **[AGENTS.md](AGENTS.md)** — primary teaching constraints; keep verbatim.
2. **[SESSION_HANDOFF.md](SESSION_HANDOFF.md)** — live checkpoint and next step.
3. **[MILESTONES.md](MILESTONES.md)** — step-by-step history/status.
4. **[DEVELOPMENT.md](DEVELOPMENT.md)** — original six decisions and workflow.
5. **[README.md](README.md)** — mission and constraints.
6. **[ROADMAP.md](ROADMAP.md)** — 12 math phases and modernization route.
7. **[CPP_CURRICULUM.md](CPP_CURRICULUM.md)** — deep C++ curriculum and mastery evidence.
8. **[CODING_STANDARDS.md](CODING_STANDARDS.md)** and **[TESTING.md](TESTING.md)** — style and verification policy.

If a general long-term statement seems at odds with recent **learner-confirmed progress**, ask for evidence rather than overwrite the checkpoint from memory. The milestone numbering for this project intentionally begins `−1.0.0`.

## 6. Instructions for starting a new conversation

1. Place or retain these `.md` files in your existing `mimir/` project directory; they are documentation **only** and should not overwrite `src/main.cpp`, `Makefile`, `tests/`, your executable or `mimir.dSYM`.
2. Start a fresh ChatGPT conversation (you can keep it inside your existing C++ Projects workspace/project if useful) and attach the updated Markdown documents or their ZIP.
3. Send the following short message:

> We are continuing **Mímir**, my C++11-first, very incremental C++ mastery and numerical computing project. I attached our documentation. Read `AGENTS.md`, `SESSION_HANDOFF.md`, and `MILESTONES.md` first, and follow the other files for the established decisions. I write all implementation code. Please resume at **Step −1.0.33** only, with one extremely small teaching action and a clear verification. Do not generate full files or skip milestones.

4. Once the learner completes −1.0.33, record `DONE` before moving to −1.0.34. Refresh `MILESTONES.md` and this handoff file at the next significant session boundary.

## 7. What not to do on resume

- Do **not** resume at −1.0.13; that's an obsolete checkpoint in older Markdown files.
- Do **not** mark −1.0.33 done just because the preceding assistant *described* it.
- Do **not** switch to C++17 or C++23; the current engine is C++11 and in early Phase 0.
- Do **not** initialize Git, add tests, change the whole Makefile, or begin calculus features without making those their own future microsteps.
- Do **not** equate a successful compile with deep C++ mastery.
