# C - Structures, typedef

This directory contains C programs that introduce structures and `typedef`.

## Files

| File | Description |
|------|-------------|
| `dog.h` | Header file that defines `struct dog` with the members `name` (`char *`), `age` (`float`) and `owner` (`char *`), and holds the function prototypes. |
| `1-init_dog.c` | Function that initializes a variable of type `struct dog`. Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);` |

## Compilation

Files are compiled on Ubuntu 20.04 LTS using `gcc` with the following flags:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

