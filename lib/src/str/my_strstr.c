/*
** EPITECH PROJECT, 2025
** my_strstr
** File description:
** Reproduce the behavior of the strstr function.
*/

#include <stddef.h>
#include "lib.h"

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
