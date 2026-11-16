# Testing and Numerical Verification — Project −1

## Philosophy
Tests are part of learning, not an afterthought. Start with a simple `if` and a meaningful exit status; evolve only when repeated boilerplate justifies a helper. The learner writes tests and implementation, guided by [AGENTS.md](AGENTS.md).

## Initial test harness
- C++11 standard library only; no external testing framework.
- Separate test executable as soon as it is useful.
- Use `make test` to run tests once the Makefile has a test target.
- Report failures clearly and return a nonzero exit code.
- Potential later helpers: exact equality, boolean checks, approximate numerical equality; don't build them prematurely.

## Floating-point policy
Use `double` by default. For finite expected and actual values, a common comparison form is:

`abs(actual - expected) <= abs_tol + rel_tol * max(abs(actual), abs(expected))`

- Choose tolerances based on the algorithm, scale, and expected error; no universal magic epsilon.
- Treat NaN and infinities explicitly rather than allowing them to pass by accident.
- Use exact equality only where exactness is meaningful.

## Numerical verification categories
- **Known values:** polynomial evaluations and derivatives with analytical answers.
- **Roots:** known roots and checks on preconditions (for example, bracketing for bisection).
- **Optimization:** known minimizers, stopping criteria, and non-convergence cases.
- **Integration:** compare numerical integrals with known antiderivatives.
- **ODEs:** compare simple initial-value problems with known solutions.
- **Convergence:** vary step size or iteration count under conditions where improvement is expected.
- **Stability:** explore roundoff, cancellation, overflow, underflow, and finite-difference error.
- **Invalid input:** test bad parameters and failure reporting.

## Test-driven microstep cycle
1. State the next tiny observable behavior.
2. Write a focused test that fails for the expected reason, where practical.
3. Implement the minimum change yourself.
4. Run the focused test, then all regression tests.
5. Run the program to demonstrate the new capability.
6. Make only necessary small refactors; rerun tests.
7. Commit the completed milestone.

A deliberately failing test is normal *during* TDD; the committed milestone must pass. A build passing is not proof of mathematical correctness.

## Modernization regression policy
Before and after each C++ standard upgrade, compare results using justified numerical tolerances. Preserve reference test cases and investigate changes rather than assuming exact floating-point bit patterns must always match.
