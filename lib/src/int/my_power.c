/*
** EPITECH PROJECT, 2025
** my_power
** File description:
** Write an recursive function that returns
** the first argument raised to the power p, where p is the second argument.
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
