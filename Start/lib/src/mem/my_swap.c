/*
** EPITECH PROJECT, 2026
** my_swap
** File description:
** Swap the content of two memory blocks of the given size.
*/

#include "utilslib.h"

void my_swap(void *a, void *b, size_t size)
{
    char tmp[size];

    my_memcpy(tmp, a, size);
    my_memcpy(a, b, size);
    my_memcpy(b, tmp, size);
}
