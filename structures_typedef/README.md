# C - Structures, typedef

This directory contains C programs that introduce structures and `typedef`.

## Files

| File | Description |
|------|-------------|
| `dog.h` | Header file that defines `struct dog` with the members `name` (`char *`), `age` (`float`) and `owner` (`char *`), defines the type `dog_t` as a new name for `struct dog`, and holds the function prototypes. |
| `1-init_dog.c` | Function that initializes a variable of type `struct dog`. Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);` |
| `2-print_dog.c` | Function that prints a `struct dog`. Prints `(nil)` for any `NULL` string element and nothing if `d` is `NULL`. Prototype: `void print_dog(struct dog *d);` |
| `4-new_dog.c` | Function that creates a new dog, storing copies of `name` and `owner`. Returns `NULL` on failure. Prototype: `dog_t *new_dog(char *name, float age, char *owner);` |

## Compilation

Files are compiled on Ubuntu 20.04 LTS using `gcc` with the following flags:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

