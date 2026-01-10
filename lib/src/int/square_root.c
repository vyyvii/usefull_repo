/*
** EPITECH PROJECT, 2026
** square_root
** File description:
** Return the perfect square root of nb, or 0 if nb is not a perfect square.
*/

#include "utilslib.h"

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
