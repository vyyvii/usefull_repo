/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static int detect_point_minus(char const **str, int *is_point, int *is_minus)
{
    if (**str == '.' && !(*is_point)) {
        (*str)++;
        *is_point = 1;
        return 1;
    }
    if (**str == '-' && !(*is_minus)) {
        (*str)++;
        *is_minus = 1;
        return 1;
    }
    return 0;
}

/**
 * @ingroup str
 * @brief Tests if the string contains only digits or a point.
 * @param str String.
 * @return 1 if numeric double only, otherwise 0.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_str_isdoublenum(char const *str)
{
    int is_point = 0;
    int is_minus = 0;

    while (*str) {
        if (*str >= 48 && *str <= 57) {
            str++;
            continue;
        }
        if (detect_point_minus(&str, &is_point, &is_minus))
            continue;
        return 0;
    }
    return 1;
}
