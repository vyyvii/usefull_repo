/*
** EPITECH PROJECT, 2025
** my_is_prime
** File description:
** Write a function that returns 1 if the number is prime and 0 if not.
*/

#include "lib.h"

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
