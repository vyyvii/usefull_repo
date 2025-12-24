/*
** EPITECH PROJECT, 2025
** free_table
** File description:
** free_table
*/

#include "lib.h"

void free_table(void **table)
{
    if (!table)
        return;
    for (size_t i = 0; table[i] != NULL; i++) {
        free(table[i]);
        table[i] = NULL;
    }
    free(table);
}
