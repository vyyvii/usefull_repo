/*
** EPITECH PROJECT, 2025
** my_strcmp
** File description:
** Compare two strings
*/

#include "utilslib.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (s1[i] == s2[i])
        return 0;
    return (s1[i] > s2[i]) ? 1 : -1;
}
