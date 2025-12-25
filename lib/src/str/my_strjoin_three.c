/*
** EPITECH PROJECT, 2025
** my_strjoin_three
** File description:
** Put s1 > s2 > s3
*/

#include "lib.h"

char *my_strjoin_three(char const *s1, char const *s2, char const *s3)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    int len3 = my_strlen(s3);
    char *res = malloc(len1 + len2 + len3 + 1);
    int i = 0;

    if (!res)
        return NULL;
    for (i = 0; i < len1; i++)
        res[i] = s1[i];
    for (i = 0; i < len2; i++)
        res[len1 + i] = s2[i];
    for (i = 0; i < len3; i++)
        res[len1 + len2 + i] = s3[i];
    res[len1 + len2 + len3] = '\0';
    return res;
}
