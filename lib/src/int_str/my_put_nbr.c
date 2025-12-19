/*
** EPITECH PROJECT, 2025
** my_put_nbr.c
** File description:
** Write a function that displays the number given as a parameter.
** It must be able to display all the possible values of an int.
*/

#include "lib.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + '0');
    return (0);
}
