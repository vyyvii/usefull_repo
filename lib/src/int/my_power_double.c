/*
** EPITECH PROJECT, 2025
** my_power
** File description:
** Recursively raise a double to an integer power.
*/

#include "utilslib.h"

double my_power_double(double nb, int p)
{
    if (p == 0)
        return 1;
    else if (p < 0)
        return 0;
    return my_power_double(nb, p - 1) * nb;
}
