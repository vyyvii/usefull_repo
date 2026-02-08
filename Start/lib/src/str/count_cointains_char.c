/*
** EPITECH PROJECT, 2026
** my_revstr
** File description:
** Reverse a string in place.
*/

#include "utilslib.h"

int contains_char(char *str, char c)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            return 1;
    }
    return 0;
}

int count_char(char *str, char c)
{
    int result = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            result++;
    }
    return result;
}
