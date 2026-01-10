/*
** EPITECH PROJECT, 2026
** my_str_isdoublenum
** File description:
** Return 1 when the string contains only digits and a point, otherwise 0.
*/

#include "utilslib.h"

int my_str_isdoublenum(char const *str)
{
    int is_point = 0;

    while (*str) {
        if (*str >= 48 && *str <= 57)
            str++;
        else if (*str == '.' && !is_point) {
            str++;
            is_point = 1;
        } else
            return 0;
    }
    return 1;
}
