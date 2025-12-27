/*
** EPITECH PROJECT, 2025
** my_swap
** File description:
** Write a function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

#include "utilslib.h"

void my_swap(void *a, void *b, size_t size)
{
    char tmp[size];

    my_memcpy(tmp, a, size);
    my_memcpy(a, b, size);
    my_memcpy(b, tmp, size);
}
