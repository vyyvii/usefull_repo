/*
** EPITECH PROJECT, 2025
** smalloc
** File description:
** Secure malloc
*/

#include "lib.h"

void *smalloc(ssize_t size)
{
    void *ptr = malloc(size);

    if (!ptr)
        return NULL;
    return ptr;
}

void free_table(int **table, int size)
{
    for (int i = 0; i < size; i++)
        free(table[i]);
    free(table);
}

void free_dtable(double **table, int size)
{
    for (int i = 0; i < size; i++)
        free(table[i]);
    free(table);
}
