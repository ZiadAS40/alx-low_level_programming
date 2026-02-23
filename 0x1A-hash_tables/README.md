# 0x1A. C - Hash tables

## Description

This project is part of the ALX Software Engineering curriculum. It focuses on implementing and understanding hash tables in C. Hash tables are data structures that provide fast insertion, deletion, and lookup of key/value pairs using a hash function.

## Learning Objectives

- What is a hash function
- What makes a good hash function
- How to use hash tables and handle collisions
- How to implement hash tables in C

## Files

| File                | Description                        |
|---------------------|------------------------------------|
| `hash_tables.h`     | Header file with prototypes        |
| `0-hash_table_create.c` | Creates a hash table         |
| `1-djb2.c`          | Implements the djb2 hash function  |
| `2-key_index.c`     | Gives the index of a key           |
| `3-hash_table_set.c`| Adds an element to the table       |
| `4-hash_table_get.c`| Retrieves a value by key           |
| `5-hash_table_print.c` | Prints the hash table          |
| `6-hash_table_delete.c`| Deletes the hash table         |

## Usage

Compile with:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_tables
```

## Author

- Ziad

## References

- [Hash table - Wikipedia](https://en.wikipedia.org/wiki/Hash_table)
- [djb2 hash function](http://www.cse.yorku.ca/~oz/hash.html)