# Mímir — Calculus & Numerical Optimization Engine

**Project −1** of the C++ mathematical computing and language-model learning journey.

## Purpose
Build a dependency-free C++ numerical computing application incrementally, starting from elementary functions and growing alongside AP Calculus BC study into introductory numerical analysis and selected undergraduate topics. This is the prerequisite project for the 10-project journey (Projects 0–9) ending in a small, trainable GPT-like model.

## Scope
The planned engine will explore function evaluation, limits and numerical precision, numerical differentiation and verification, root finding, one-dimensional optimization, optimization experiments, numerical integration, introductory ODE solvers, Taylor approximations, numerical stability, and an integrated CLI workbench. The approved 12-phase overall plan is documented in [ROADMAP.md](ROADMAP.md); detailed microsteps are planned separately.

## Constraints
- Initial implementation: **C++11**, using the C++ standard library only; no third-party runtime, math, ML, or test frameworks.
- Compiler: **Apple Clang 21.0.0** (`clang++`).
- Build system: **GNU Make 3.81**, with a minimal Makefile.
- Development environment: macOS.
- Keep verified executable checkpoints; individual edit/review/build/run microsteps are separate, and intentionally invalid experiments must be clearly identified and restored before concluding them. No automated tests or Git are presumed before their introduction.
- After the C++11 engine is complete, modernize in small, verified steps through C++14, C++17, C++20, C++23; C++26 only when practical toolchain support is confirmed.

## Teaching agreement
Read [AGENTS.md](AGENTS.md) before helping with implementation. The learner writes the code; the assistant explains, guides, reviews, and provides only tiny illustrative snippets (normally 2–5 lines). Never jump to whole implementations.

The WatchAndCode-informed addition is recorded in [DEVELOPMENT.md](DEVELOPMENT.md) and [WATCHANDCODE_REVIEW.md](WATCHANDCODE_REVIEW.md): selective prediction, execution tracing, requirements-based reasoning, hypothesis-driven debugging and independent practice, while preserving tiny steps and graduated guidance.

## Project organization (initial plan)
```text
project-minus-one/
├── AGENTS.md
├── README.md
├── DEVELOPMENT.md
├── CODING_STANDARDS.md
├── TESTING.md
├── ROADMAP.md
├── Makefile            # created in first setup milestone
├── src/                # created in first setup milestone
└── tests/              # created as tests begin
```

Current progress is recorded in [MILESTONES.md](MILESTONES.md) and [SESSION_HANDOFF.md](SESSION_HANDOFF.md). **Last confirmed step:** −1.0.127. **Next unfinished step:** −1.0.128 — add a statement returning 1 inside the reviewed failure-condition block, then paste the block for review before compilation. Keyboard input, a prompt and a temporary stream-failure diagnostic have been verified. With input 3, the latest reported run printed diagnostic 0 followed by rows 3 9 and 4 16. The empty conditional block was added afterward and has not been confirmed compiled. All source state is learner-reported.

The comprehensive C++ benchmark is in [CPP_CURRICULUM.md](CPP_CURRICULUM.md). Selective applied data structures, correctness, complexity and representation decisions are in [DSA_CURRICULUM.md](DSA_CURRICULUM.md), informed by Goodrich/Tamassia/Mount, Weiss and CLRS without requiring every textbook subject inside the numerical engine. These documents describe plans and evidence, not generated implementation code.
