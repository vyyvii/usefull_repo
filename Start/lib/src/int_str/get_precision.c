/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup int_str
 * @brief Give the precision of a double number
 * @param number String to test
 * @return Return the precision of the number, 0 if an error occurs
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int get_precision(char *number)
{
    int i = 0;
    int precision = 0;

    while (number[i] != '.')
        i++;
    while (number[i]) {
        if (is_digit(number[i]))
            precision++;
        else
            return 0;
        i++;
    }
    return precision;
}
