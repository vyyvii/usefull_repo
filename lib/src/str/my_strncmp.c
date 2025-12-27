/*
** EPITECH PROJECT, 2025
** my_strncmp
** File description:
** Reproduce the behavior of the strncmp function.
*/

#include "utilslib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n && (s1[i] != '\0' || s2[i] != '\0')) {
        if (s1[i] != s2[i])
            return (s1[i] > s2[i]) ? 1 : -1;
        i++;
    }
    return 0;
}
