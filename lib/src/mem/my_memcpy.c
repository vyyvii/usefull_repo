/*
** EPITECH PROJECT, 2026
** my_memcpy
** File description:
** Copy a memory block of the given size from src to dest.
*/

#include "utilslib.h"

void *my_memcpy(void *dest, const void *src, size_t size)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    for (size_t i = 0; i < size; i++)
        d[i] = s[i];
    return dest;
}
