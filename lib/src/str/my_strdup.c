/*
** EPITECH PROJECT, 2025
** my_strdup
** File description:
** Reallocate with a new adress the argument
*/

#include "lib.h"

char *my_strdup(char const *str)
{
    int len = my_strlen(str);
    char *out = smalloc(sizeof(char) * (len + 1));

    for (int i = 0; i <= len; i++)
        out[i] = str[i];
    return out;
}
