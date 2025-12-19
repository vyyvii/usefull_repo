/*
** EPITECH PROJECT, 2025
** my_compute_square_root
** File description:
** Write a function that returns the square root (if it is a whole number)
** of the number given as argument. If the square root is not a whole number,
** the function should return 0.
*/

#include "lib.h"

int my_compute_square_root(int nb)
{
    if (nb <= 0)
        return 0;
    for (int i = 1; i * i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
