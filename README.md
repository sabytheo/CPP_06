*This project has been created as part of the 42 curriculum by tsaby.*

# C++ Module 06

> C++ casts

## Description

The four C++ casts and when each one is the right tool.

Part of the C++ piscine of the 42 curriculum: every exercise is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Exercises

| Exercise | Name | What it does |
|---|---|---|
| [`ex00`](ex00/) | Conversion of scalar types | `ScalarConverter::convert()` detects the type of a literal (`char`, `int`, `float`, `double`, including `nan` / `inf`) and prints it in all four types, handling impossible and non-displayable conversions. |
| [`ex01`](ex01/) | Serialization | `Serializer` turns a pointer into a `uintptr_t` and back with `reinterpret_cast`. |
| [`ex02`](ex02/) | Identify real type | Randomly generates an `A`, `B` or `C` behind a `Base*` and identifies it with `dynamic_cast`, both from a pointer and from a reference. |

## Instructions

Each exercise is an independent program with its own `Makefile`:

```bash
cd ex00
make
```

| Exercise | Binary | Usage |
|---|---|---|
| `ex00` | `Conversion` | `./Conversion 42.0f` |
| `ex01` | `Conversion` | `./Conversion` |
| `ex02` | `Conversion` | `./Conversion` |

`make clean` removes the object files, `make fclean` also removes the binary and `make re` rebuilds from scratch.

## Resources

- [cppreference.com](https://en.cppreference.com/w/cpp) — language and standard library reference
- [cplusplus.com](https://cplusplus.com/reference/) — C++98 standard library reference
