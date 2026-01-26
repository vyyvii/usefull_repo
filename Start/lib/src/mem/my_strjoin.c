/*
** EPITECH PROJECT, 2026
** my_strjoin
** File description:
** Allocate and return the concatenation of two strings.
*/

#include "utilslib.h"

char *my_strjoin(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    char *res = malloc(len1 + len2 + 1);
    int i = 0;

    if (!res)
        return NULL;
    for (i = 0; i < len1; i++)
        res[i] = s1[i];
    for (i = 0; i < len2; i++)
        res[len1 + i] = s2[i];
    res[len1 + len2] = '\0';
    return res;
}
