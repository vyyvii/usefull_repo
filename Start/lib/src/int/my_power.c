/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup int
 * @brief Recursive integer power: computes nb ^ p.
 * @param nb Integer base.
 * @param p Exponent (0 returns 1, negative returns 0).
 * @return Result of nb ^ p if valid, otherwise 0 when p < 0
 * or on overflow risk.
 * @note Complexity: O(p)
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Overflow risk for large nb and p.
 */
int my_power(int nb, int p)
{
    if (p == 0)
        return 1;
    else if (p < 0 || (nb > 46340 && p > 1))
        return 0;
    return my_power(nb, p - 1) * nb;
}
