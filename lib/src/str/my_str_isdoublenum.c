/*
** EPITECH PROJECT, 2026
** my_str_isdoublenum
** File description:
** Return 1 when the string contains only digits and a point, otherwise 0.
*/

#include "utilslib.h"

static int detect_point_minus(char const *str, int *is_point, int *is_minus)
{
    if (*str == '.' && !(*is_point)) {
        str++;
        *is_point = 1;
        return 1;
    }
    if (*str == '-' && !(*is_minus)) {
        str++;
        *is_minus = 1;
        return 1;
    }
    return 0;
}

int my_str_isdoublenum(char const *str)
{
    int is_point = 0;
    int is_minus = 0;

    while (*str) {
        if (*str >= 48 && *str <= 57) {
            str++;
            continue;
        }
        if (detect_point_minus(str, &is_point, &is_minus))
            continue;
        return 0;
    }
    return 1;
}
