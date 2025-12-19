/*
** EPITECH PROJECT, 2025
** my_strstr
** File description:
** Reproduce the behavior of the strstr function.
*/

#include <stddef.h>
#include "lib.h"

static int my_strncmp_bis(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i] && s1[i] - s2[i] > 0)
            return 1;
        if (s1[i] != s2[i] && s1[i] - s2[i] < 0)
            return -1;
        i++;
    }
    return 0;
}

static int my_strlen_bis(char const *str)
{
    int len = 0;

    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

char *my_strstr(char *str, char const *to_find)
{
    int needle_len = my_strlen_bis(to_find);

    if (needle_len == 0)
        return str;

    while (*str && my_strncmp_bis(str, to_find, needle_len) != 0)
        str++;
    if (*str)
        return str;
    return NULL;
}
