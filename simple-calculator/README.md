
# Simple Calculator

## Description
A terminal-based interactive calculator written in C.

The program allows users to perform basic arithmetic
operations through a menu-driven interface.

## Supported Operations
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Quit (0)

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Numeric Behavior
- Uses double data type for decimal numbers.
- Displays results with two decimal places.
- Supports integer and decimal operands.
- Prevents division by zero.

## Input Validation
- Validates that menu choices are integers.
- Checks that menu choices are between 0 and 4.
- Invalid numeric input terminates the program.

## Known Limitations
- Non-numeric input is not recovered automatically.
- Invalid operands terminate the program.
