/*
** EPITECH PROJECT, 2025
** my_strdup
** File description:
** Duplicate a string into a newly allocated buffer.
*/

#include "utilslib.h"

char *my_strdup(char const *str)
{
    int len = my_strlen(str);
    char *out = malloc(sizeof(char) * (len + 1));

    if (!out)
        return NULL;
    for (int i = 0; i <= len; i++)
        out[i] = str[i];
    return out;
}
