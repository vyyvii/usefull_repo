/*
** EPITECH PROJECT, 2026
** my_power
** File description:
** Recursively raise an integer to an integer power with basic overflow guard.
*/

#include "utilslib.h"

int my_power(int nb, int p)
{
    if (p == 0)
        return 1;
    else if (p < 0 || (nb > 46340 && p > 1))
        return 0;
    return my_power(nb, p - 1) * nb;
}
