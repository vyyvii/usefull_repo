/*
** EPITECH PROJECT, 2026
** my_strstr
** File description:
** Locate a substring within a string (strstr behavior).
*/

#include <stddef.h>
#include "utilslib.h"

char *my_strstr(char *str, char const *to_find)
{
    int needle_len = my_strlen(to_find);

    if (needle_len == 0)
        return str;
    while (*str && my_strncmp(str, to_find, needle_len) != 0)
        str++;
    if (*str)
        return str;
    return NULL;
}
