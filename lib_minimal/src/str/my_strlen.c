/*
** EPITECH PROJECT, 2026
** my_strlen
** File description:
** Count the number of characters in a null-terminated string.
*/

#include "utilslib.h"

int my_strlen(char const *str)
{
    int len = 0;

    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}
