/*
** EPITECH PROJECT, 2026
** my_find_prime_sup
** File description:
** Return the smallest prime number greater than or equal to the input.
*/

#include "utilslib.h"

int my_find_prime_sup(int nb)
{
    int i = 0;

    while (my_is_prime(nb + i) == 0)
        i++;
    return nb + i;
}
