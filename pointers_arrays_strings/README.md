# Pointers, Arrays and Strings

## 0. 98 Battery st.

- File: `0-reset_to_98.c`
- Function: `reset_to_98(int *n)`
- Description: Updates the value pointed to by the integer pointer to 98 using dereferencing.

# Pointers, Arrays and Strings

## 1. Don't swap horses in crossing a stream

- **File:** `1-swap.c`
- **Prototype:** `void swap_int(int *a, int *b);`
- **Description:** Swaps the values of two integers using pointers and a temporary variable.
- **Concepts:** Pointers, dereferencing, and memory addresses.

## 2. This report, by its very length, defends itself against the risk of being read

- **File:** `2-strlen.c`
- **Prototype:** `int _strlen(char *s);`
- **Description:** Returns the length of a string without using the standard library strlen function.
- **Concepts:** Strings, pointers, arrays, while loops, and the null terminator (`\0`).

## 3. I do not fear computers. I fear the lack of them

- **File:** `3-puts.c`
- **Prototype:** `void _puts(char *str);`
- **Description:** Prints a string followed by a new line using _putchar.
- **Concepts:** Pointers, strings, pointer increment, loops, and null terminator.

## 4. I can only go one way. I've not got a reverse gear

- **File:** `4-print_rev.c`
- **Prototype:** `void print_rev(char *s);`
- **Description:** Prints a string in reverse followed by a new line.
- **Concepts:** Strings, pointers, loops, array indexing, and string length.

## 5. A good engineer thinks in reverse

- **File:** `5-rev_string.c`
- **Prototype:** `void rev_string(char *s);`
- **Description:** Reverses a string by swapping characters in place.
- **Concepts:** Pointers, arrays, string manipulation, loops, and temporary variables.

## 6. Half the lies they tell about me aren't true

- **File:** `6-puts2.c`
- **Prototype:** `void puts2(char *str);`
- **Description:** Prints every other character of a string, starting with the first character, followed by a new line.
- **Concepts:** Pointers, strings, arrays, loops, and character indexing.

## 7. Winning is only half of it. Having fun is the other half

- **File:** `7-puts_half.c`
- **Prototype:** `void puts_half(char *str);`
- **Description:** Prints the second half of a string. If the length is odd, prints the last (length + 1) / 2 characters.
- **Concepts:** Pointers, strings, arrays, loops, and integer division.

## 8. Arrays are not pointers

- **File:** `8-print_array.c`
- **Prototype:** `void print_array(int *a, int n);`
- **Description:** Prints n elements of an integer array in their original order, separated by comma and space, followed by a new line.
- **Concepts:** Arrays, pointers, loops, printf, and array indexing.

## 9. strcpy

- **File:** `9-strcpy.c`
- **Prototype:** `char *_strcpy(char *dest, char *src);`
- **Description:** Copies a string from src to dest, including the terminating null byte, and returns a pointer to dest.
- **Concepts:** Pointers, strings, arrays, loops, and memory copying.

## 10. Great leaders are willing to sacrifice the numbers to save the people

- **File:** `100-atoi.c`
- **Prototype:** `int _atoi(char *s);`
- **Description:** Converts a string into an integer, handling signs and non-numeric characters before the number.
- **Concepts:** Pointers, strings, loops, conditions, ASCII values, and integer conversion.



# Pointers, Arrays and Strings

## Tasks

### 0. strcat

Implemented `_strcat`, a function that concatenates
two strings by appending the source string to the
destination string.

The function:
- Finds the end of the destination string.
- Copies the source string to the end of the destination.
- Adds the null terminator.
- Returns a pointer to the destination string.


### 1. strncat

Implemented `_strncat`, a function that concatenates
two strings using at most n bytes from the source string.

The function:
- Finds the end of the destination string.
- Copies up to n characters from the source string.
- Adds a null terminator at the end.
- Returns a pointer to the destination string.



### 2. strncpy

Implemented `_strncpy`, a function that copies a string
using at most n characters.

The function:
- Copies characters from the source to the destination.
- Stops when n characters are copied or the source ends.
- Fills remaining positions with null bytes if needed.
- Returns a pointer to the destination string.


### 3. strcmp

Implemented `_strcmp`, a function that compares two strings.

The function:
- Compares characters one by one.
- Stops at the first different character or null byte.
- Returns the difference between the first different characters.


### 4. reverse_array

Implemented `reverse_array`, a function that reverses
the content of an integer array.

The function:
- Uses a temporary variable to swap elements.
- Swaps elements from both ends toward the middle.
- Modifies the original array without creating another array.


### 5. string_toupper

Implemented `string_toupper`, a function that converts
all lowercase letters in a string to uppercase.

The function:
- Iterates through the string.
- Checks whether each character is lowercase.
- Converts lowercase letters to uppercase using ASCII.
- Returns a pointer to the modified string.


### 6. cap_string

Implemented `cap_string`, a function that capitalizes
the first letter of every word in a string.

The function:
- Iterates through the string.
- Checks whether the current character follows a word separator.
- Converts lowercase letters to uppercase.
- Supports spaces, tabs, newlines, and punctuation separators.
- Returns a pointer to the modified string.


### 7. leet

Implemented `leet`, a function that encodes a string
into 1337.

The function:
- Replaces a/A with 4.
- Replaces e/E with 3.
- Replaces o/O with 0.
- Replaces t/T with 7.
- Replaces l/L with 1.
- Uses two loops and only one if statement.
- Returns a pointer to the modified string.



# Pointers, Arrays and Strings

## Tasks

### 0. memset

Implemented a function `_memset` that fills the first `n` bytes
of a memory area with a constant byte.

- Uses a loop to iterate through the memory area.
- Replaces each byte with the given value.
- Returns a pointer to the original memory area.


### 1. memcpy

Implemented a function `_memcpy` that copies `n` bytes
from a source memory area to a destination memory area.

- Copies bytes using a loop.
- Preserves the original source memory.
- Returns a pointer to the destination memory area.


### 2. strchr

Implemented a function `_strchr` that locates the first
occurrence of a character in a string.

- Searches the string character by character.
- Returns a pointer to the first matching character.
- Returns NULL if the character is not found.


### 3. strspn

Implemented a function `_strspn` that calculates the length
of the initial segment of a string containing only accepted characters.

- Checks each character against the accept string.
- Uses nested loops to search for matching characters.
- Stops at the first character that is not found.
- Returns the number of matching bytes.


### 4. strpbrk

Implemented a function `_strpbrk` that searches a string
for the first occurrence of any character from an accepted set.

- Iterates through the source string.
- Checks each character against the accept string.
- Returns a pointer to the first matching character.
- Returns NULL if no matching character is found.


### 5. strstr

Implemented a function `_strstr` that locates the first
occurrence of a substring within another string.

- Searches for a substring character by character.
- Compares characters using nested pointers.
- Returns a pointer to the beginning of the matching substring.
- Returns NULL if the substring is not found.
- Returns the original string if the needle is empty.

### 6. Chess is mental torture

- **File:** `7-print_chessboard.c`
- **Function:** `print_chessboard`
- Prints an 8x8 chessboard.
- Uses nested loops to iterate through rows and columns.
- Uses `_putchar` to print each character.
- Prints a newline after each row.