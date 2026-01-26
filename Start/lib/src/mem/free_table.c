/*
** EPITECH PROJECT, 2026
** free_table
** File description:
** Free a NULL-terminated array of pointers and its elements.
*/

#include "utilslib.h"

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

void free_partial_table(void **table, int n)
{
    if (!table)
        return;
    for (int i = 0; i < n; i++) {
        free(table[i]);
        table[i] = NULL;
    }
    free(table);
}
