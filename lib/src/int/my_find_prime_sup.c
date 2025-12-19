/*
** EPITECH PROJECT, 2025
** my_find_prime_sup
** File description:
** Write a function that returns the smallest prime number
** that is greater than, or equal to, the number given as a parameter.
*/

#include "lib.h"

int my_find_prime_sup(int nb)
{
    int i = 0;

    while (my_is_prime(nb + i) == 0)
        i++;
    return nb + i;
}
