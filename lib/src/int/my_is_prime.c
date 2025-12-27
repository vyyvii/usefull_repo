/*
** EPITECH PROJECT, 2025
** my_is_prime
** File description:
** Write a function that returns 1 if the number is prime and 0 if not.
*/

#include "utilslib.h"

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    if (nb == 2 || nb == 3)
        return 1;
    if (nb % 2 == 0 || nb % 3 == 0)
        return 0;
    for (int i = 5; i * i <= nb; i += 6) {
        if (nb % i == 0 || nb % (i + 2) == 0)
            return 0;
    }
    return 1;
}
