/*
** EPITECH PROJECT, 2026
** my_str_isnum
** File description:
** Return 1 when the string contains only digits, otherwise 0.
*/

#include "utilslib.h"

int my_str_isnum(char const *str)
{
    int is_minus = 0;

    while (*str) {
        if (is_digit(*str)) {
            str++;
            continue;
        }
        if (*str == '-' && !is_minus) {
            str++;
            is_minus = 1;
            continue;
        }
        return 0;
    }
    return 1;
}
