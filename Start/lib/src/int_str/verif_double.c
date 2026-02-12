/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static int detect_point_minus(char *number, int *i, int *is_point,
    int *is_minus)
{
    if (number[*i] == '.' && !(*is_point)) {
        (*i)++;
        *is_point = 1;
        return 1;
    }
    if (number[*i] == '-' && !(*is_minus)) {
        (*i)++;
        *is_minus = 1;
        return 1;
    }
    return 0;
}

/**
 * @ingroup int_str
 * @brief Validates that a string represents an double (optionally signed)
 * and converts it.
 * @param number String to validate (may start with '-').
 * @param result Output: converted double if valid.
 * @return 0 on success, 84 if the string is not a valid integer.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Does not handle internal spaces; only ASCII digits are accepted.
 */
int verif_double(char *number, double *result)
{
    int is_point = 0;
    int is_minus = 0;
    int i = 0;

    while (number[i]) {
        if (number[i] >= 48 && number[i] <= 57) {
            i++;
            continue;
        }
        if (detect_point_minus(number, &i, &is_point, &is_minus))
            continue;
        return FAILURE;
    }
    *result = my_get_double_nbr(number);
    return SUCCESS;
}
