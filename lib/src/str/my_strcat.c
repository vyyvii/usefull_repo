/*
** EPITECH PROJECT, 2025
** my_strjoin
** File description:
** Concatenate a string src with an other one, dest. Return dest
*/

#include "lib.h"

char *my_strjoin(char *dest, char const *src)
{
    int len1 = my_strlen(dest);
    int len2 = my_strlen(src);
    char *res = malloc(len1 + len2 + 1);
    int i = 0;

    if (!res)
        return NULL;
    for (i = 0; i < len1; i++)
        res[i] = dest[i];
    for (i = 0; i < len2; i++)
        res[len1 + i] = src[i];
    res[len1 + len2] = '\0';
    return res;
}
