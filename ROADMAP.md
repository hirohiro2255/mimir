# Mímir — Overall Roadmap v1.0

**Project −1: Calculus & Numerical Optimization Engine**

## Purpose and boundaries

Mímir is a dependency-free, educational **C++ numerical computing engine**, built in tiny, verified increments while studying AP Calculus BC and continuing into selected introductory numerical-analysis topics. It is the mathematical and programming foundation for the later Projects 0–9, culminating in a small GPT-like language model.

This is an **overall phase roadmap**, not a fixed implementation plan or a list of hundreds of TODOs. Detailed Phase 0 milestones will be designed separately in `MILESTONES.md` before coding. A phase is complete only when its capabilities work and its mathematical behavior has been checked.

**Constraints:** C++11 first, C++ standard library only, Apple Clang 21, GNU Make 3.81, macOS; start with a tiny CLI. The learner writes code; AI helps teach, review and debug according to `AGENTS.md`. See `DEVELOPMENT.md`, `CODING_STANDARDS.md`, and `TESTING.md`.

## Part A — Build the full C++11 engine

### Phase 0 — Mathematical Function Explorer
- **Concepts:** mathematical functions, domains, input/output, tables, coordinate axes.
- **Build toward:** evaluate a few explicitly supported functions; print value tables; visualize simple graphs in terminal text.
- **Completion check:** selected functions produce correct known values; tabular and graph output are consistent with computed samples; invalid inputs are handled clearly.
- **Boundary:** no general-purpose expression parser or graphical user interface required.

### Phase 1 — Limits and Numerical Precision
- **Concepts:** one-sided approaches, limits, continuity, finite floating-point precision.
- **Build toward:** sample a function as input approaches a target from either side; compare values at multiple step sizes.
- **Completion check:** experiments illustrate both a well-behaved limit and a misleading numerical case; non-finite results are not silently accepted.
- **Boundary:** numerical sampling is evidence, not a mathematical proof of a limit.

### Phase 2 — Numerical Differentiation
- **Concepts:** derivative as local rate of change; forward, backward and central finite differences.
- **Build toward:** numerical derivative approximations using controlled step size.
- **Completion check:** compare against simple exact derivatives at known points and observe how error changes with step size.

### Phase 3 — Derivative Verification
- **Concepts:** symbolic/analytical derivatives, chain rule, error measurement.
- **Build toward:** compare known analytical derivatives with finite-difference estimates.
- **Completion check:** correctly report numerical discrepancy over representative points and explain why exact equality is not expected.
- **Boundary:** no symbolic differentiation system required.

### Phase 4 — Root-Finding Engine
- **Concepts:** zeros of functions, bracketing, Newton iteration, convergence and failure.
- **Build toward:** bisection and Newton's method for one-variable functions.
- **Completion check:** converge for suitable test problems; report failed brackets, small derivatives, iteration limits, or non-convergence explicitly.

### Phase 5 — One-Dimensional Optimization
- **Concepts:** minima, derivative-based descent, learning rate, stopping conditions.
- **Build toward:** basic gradient descent on one-variable test functions.
- **Completion check:** show reproducible optimization traces on suitable objectives and recognize divergence or non-convergence.

### Phase 6 — Optimization Experiments
- **Concepts:** momentum, learning-rate schedules, fair algorithm comparisons.
- **Build toward:** compare basic descent with selected incremental improvements.
- **Completion check:** keep starting conditions and stopping rules comparable; demonstrate both useful and problematic parameter choices.
- **Boundary:** remain in one dimension; multivariable training belongs to later projects.

### Phase 7 — Numerical Integration
- **Concepts:** definite integrals, partition size, Riemann sums, trapezoid and Simpson rules.
- **Build toward:** approximate definite integrals with multiple methods.
- **Completion check:** compare against integrals with known exact values; demonstrate convergence and sensible input validation.

### Phase 8 — Ordinary Differential Equation Solver
- **Concepts:** initial-value problems, time stepping, Euler's method, a basic Runge–Kutta method.
- **Build toward:** solve small one-variable ODE examples numerically.
- **Completion check:** compare trajectories against known solutions, document step-size effects and failure limitations.
- **Boundary:** no PDE or CFD solver in Mímir.

### Phase 9 — Taylor Series Engine
- **Concepts:** Taylor polynomials, local approximation, remainder/error.
- **Build toward:** evaluate Taylor approximations for carefully selected functions.
- **Completion check:** inspect approximation error as degree and distance from expansion point change.
- **Boundary:** avoid building a broad computer algebra system.

### Phase 10 — Numerical Stability Laboratory
- **Concepts:** cancellation, rounding, overflow, underflow and stability of formulas.
- **Build toward:** reproducible demonstrations of floating-point pitfalls and safer equivalent formulations where appropriate.
- **Completion check:** explain observed error or non-finite behavior with repeatable experiments; tests distinguish meaningful failures from acceptable rounding.

### Phase 11 — Complete Optimization Workbench
- **Concepts:** combining numerical tools into a consistent, inspectable workflow.
- **Build toward:** a coherent CLI exposing the completed experiments, reproducible inputs, text-based results, and selected CSV exports.
- **Completion check:** representative end-to-end workflows run successfully; regression/numerical tests pass; documentation explains the supported scope and limitations.
- **Boundary:** no requirement for an interactive GUI, GPU execution, matrices/tensors, automatic differentiation or neural networks.

## Part B — Modernize the completed engine

**Only after Part A is complete and tagged**, upgrade the same codebase in order:

1. **C++11 → C++14:** compile unchanged first; introduce useful C++14 improvements one at a time.
2. **C++14 → C++17:** repeat the baseline-and-small-refactor process.
3. **C++17 → C++20:** introduce only features that help clarity, correctness or maintainability.
4. **C++20 → C++23:** modernize selectively, subject to actual Apple Clang/library support.
5. **C++26:** optional, only after toolchain support and concrete benefit are established.

For every modernization step: preserve functionality, run regression/numerical tests, explain the motivation, commit the small change and tag meaningful checkpoints. Do not add a feature merely to exercise new syntax.

## Study dependencies and pace

- **Phase 0** can start now with basic functions and C++ basics.
- **Limits and derivatives** become central in Phases 1–6.
- **Integration** is central to Phase 7; **introductory differential equations** to Phase 8; **Taylor series** to Phase 9.
- **Floating-point behavior** is examined from the beginning, with deeper treatment in Phase 10.
- Phases may pause while the relevant mathematics is being learned. Accuracy and understanding take priority over dates or fixed milestone counts.

## How we advance

1. Approve this overall roadmap.
2. Design **Phase 0 only** as extremely small milestones and record them in `MILESTONES.md`.
3. Begin at **microstep −1.0.0**, one tiny learning/coding action at a time.
4. For each completed milestone, follow `DEVELOPMENT.md`'s Definition of Done and commit.
5. Revisit the roadmap explicitly if mathematical needs or project boundaries change.

**Not included in Project −1:** general-purpose tensor operations, full automatic differentiation, neural networks, tokenizers or language models. Those are handled by Projects 0–9.
