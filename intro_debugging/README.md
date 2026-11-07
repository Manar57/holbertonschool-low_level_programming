### 0. Debugging a Counting Function

- Fixed the loop condition to include n.
- Fixed the return statement to return sum instead of n.
- Verified that sum_to_n(10) returns 55.

### 1. Debugging Nested Loops

- Fixed an unintended increment of the inner loop counter (col).
- Removed the extra col++ statement.
- Verified that all multiplication table values are printed correctly.

### 2. Debugging State Across Function Calls

- Fixed the current variable accumulation issue.
- Changed current += to current = to store only the current row sum.
- Verified that total_sum(3, 3) returns 36.