
# Benchmarking

This directory contains the benchmarking project tasks.

## Task 0: Baseline Execution Measurement

### Objective
Measure the execution time of a deterministic computation and observe timing variability across multiple runs.

### Files
- `baseline_loop.c`: Provided C program that performs 100 million iterations and measures execution time using `clock()`.
- `baseline_loop-metrics.md`: Contains the full output from three consecutive program executions.

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long baseline_loop.c -o baseline_loop
```

### Execution
The program was executed three consecutive times using the same machine and environment.

### Measurement
Execution time was measured using:
- `clock()`
- `CLOCKS_PER_SEC`

### Notes
- The source file was not modified.
- Three execution results were recorded.
- Small differences between execution times are expected.
- Execution time is used as a proxy for CPU activity, not as a direct measurement of electrical power consumption.

### 1. Algorithmic Efficiency Comparison
- Compared naive and single-pass implementations.
- Executed the program three times.
- Calculated average execution times.
- Calculated relative performance difference.

### 2. Controlled Instrumentation Experiment
- Added clock-based timing instrumentation.
- Measured total execution time and individual phases.
- Converted clock ticks into seconds.
- Documented measurement boundaries.