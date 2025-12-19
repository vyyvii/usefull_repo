/*
** EPITECH PROJECT, 2025
** free_table
** File description:
** free_table
*/

#include "lib.h"

void free_table(void **table, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        free(table[i]);
        table[i] = NULL;
    }
    free(table);
    table = NULL;
}
