/*
** EPITECH PROJECT, 2025
** my_strcpy
** File description:
** Copy up to n characters from src into dest and null-terminate.
*/

#include "utilslib.h"

char *my_strncpy(char *dest, char const *src, size_t size)
{
    size_t i = 0;

    if (size == 0)
        return dest;
    while (i + 1 < size && src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
