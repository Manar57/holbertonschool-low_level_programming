# Green Efficiency Analysis

## Measurement Methodology

The experiments measured execution time using the provided C programs and the clock-based timing functions where applicable. The programs were compiled using GCC with the required warning and standard flags.

For the baseline loop experiment, the program executed 100,000,000 iterations three times. The recorded execution times were 0.231320, 0.236475, and 0.236048 seconds. The average execution time was approximately 0.234614 seconds.

In the algorithm comparison experiment, both implementations were executed three times. The naive implementation recorded 2.796738, 2.881608, and 2.843243 seconds. The single-pass implementation recorded 0.000106, 0.000107, and 0.000114 seconds.

In the instrumentation experiment, clock() measured the total execution time and the individual BUILD_DATA, PROCESS, and REDUCE phases.

## Observed Performance Differences

The comparison experiment showed a substantial difference in measured execution time. The naive implementation had an average execution time of approximately 2.840530 seconds, while the single-pass implementation averaged approximately 0.000109 seconds.

Based on these averages, the naive implementation was approximately 26,060 times slower than the single-pass implementation.

The instrumentation experiment recorded a total time of 0.000910 seconds. BUILD_DATA took 0.000378 seconds, PROCESS took 0.000370 seconds, and REDUCE took 0.000155 seconds. BUILD_DATA was the longest measured phase, followed closely by PROCESS. The total time was greater than each individual phase, as expected.

## Relation Between Runtime and Energy Consumption

Execution time is relevant when discussing energy efficiency because a program that completes its work faster may spend less time using computing resources. However, runtime alone does not measure electrical energy consumption.

The experiments recorded execution time but did not measure CPU power, electricity usage, or total energy in joules. Therefore, the results demonstrate runtime differences, not proven energy savings. The single-pass implementation's shorter execution time suggests a potential opportunity for lower energy use, but additional power measurements would be required to confirm that conclusion.

## Limitations of the Experiment

The experiments were conducted using only three runs for the baseline and algorithm comparison measurements. A small number of runs may not represent performance under every system condition. Execution time can also be affected by processor activity and other environmental factors.

Additionally, the two comparison implementations produced different result values: 625025000 for the naive implementation and 25000 for the single-pass implementation. This indicates that their counting behavior differs, so their timing comparison should be interpreted carefully rather than treated as a perfectly equivalent workload comparison.

Finally, no direct energy measurement or hardware performance counters were collected.

## Practical Engineering Takeaway

The measurements demonstrate why algorithm design matters. The single-pass implementation completed its measured work much faster than the nested-loop implementation. The instrumentation results also show how measuring individual phases helps identify where execution time is spent.

Software engineers should consider algorithmic efficiency, measure performance instead of relying on assumptions, and verify that implementations perform equivalent work before drawing conclusions. Runtime measurements are useful evidence, but energy-efficiency claims require direct energy measurements.
