/*
** EPITECH PROJECT, 2026
** my_str_isprintable
** File description:
** Return 1 when the string contains only printable ASCII characters,
** otherwise 0.
*/

#include "utilslib.h"

int my_str_isprintable(char const *str)
{
    while (*str) {
        if (*str >= 32 && *str <= 126)
            str++;
        else
            return 0;
    }
    return 1;
}
