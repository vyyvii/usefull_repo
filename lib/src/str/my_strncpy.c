/*
** EPITECH PROJECT, 2025
** my_strcpy
** File description:
** Write a function that copies n chars of a string into another.
** The destination string will already have enough
** memory to copy the source string.
*/

#include "utilslib.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
