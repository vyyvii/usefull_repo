/*
** EPITECH PROJECT, 2026
** my_str_isnum
** File description:
** Return 1 when the string contains only digits, otherwise 0.
*/

#include "utilslib.h"

int my_str_isnum(char const *str)
{
    while (*str) {
        if (*str >= 48 && *str <= 57)
            str++;
        else
            return 0;
    }
    return 1;
}
