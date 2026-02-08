/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup int
 * @brief Perfect integer square root.
 * @param nb Input integer.
 * @return r such that r ^ 2 == nb if perfect square, otherwise 0.
 * @note Complexity: O(sqrt(n))
 */
int square_root(int nb)
{
    if (nb <= 0)
        return 0;
    for (int i = 1; i * i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
