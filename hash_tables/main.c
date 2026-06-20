#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);

    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");

    printf("%s\n", hash_table_get(ht, "Betty"));

    hash_table_print(ht);

    hash_table_delete(ht);

    return (0);
}
