/*
** EPITECH PROJECT, 2025
** my_strcpy
** File description:
** Copy a null-terminated source string into the destination buffer.
*/

#include "utilslib.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
