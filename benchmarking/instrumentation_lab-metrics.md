
# Controlled Instrumentation Experiment

## Execution Times

- TOTAL seconds:
- BUILD_DATA seconds:
- PROCESS seconds:
- REDUCE seconds:

## Measurement Boundaries

- TOTAL: Measured from immediately before build_dataset()
  until immediately after reduce_checksum().
- BUILD_DATA: Measures only build_dataset().
- PROCESS: Measures only process_dataset().
- REDUCE: Measures only reduce_checksum().

## Conclusion

The program was instrumented using clock() and clock_t.

Execution time was converted into seconds using CLOCKS_PER_SEC.

The total measurement includes all three processing phases.
The algorithmic logic and dataset were not modified.

