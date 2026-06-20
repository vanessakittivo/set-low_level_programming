# 0x1A. Hash tables

## Description
This project implements a Hash Table in C using the djb2 hash function and Separate Chaining for collision resolution.

## Files

| File                     | Description                              |
|--------------------------|------------------------------------------|
| `hash_tables.h`          | Header file with structures and prototypes |
| `0-hash_table_create.c`  | Creates a hash table                     |
| `1-djb2.c`               | djb2 hash function                       |
| `2-key_index.c`          | Returns index for a key                  |
| `3-hash_table_set.c`     | Adds/updates element                     |
| `4-hash_table_get.c`     | Retrieves value by key                   |
| `5-hash_table_print.c`   | Prints the hash table                    |
| `6-hash_table_delete.c`  | Deletes the hash table                   |

## Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o hash_tables
