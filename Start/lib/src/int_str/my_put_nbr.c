/*
** EPITECH PROJECT, 2026
** my_put_nbr.c
** File description:
** Display an integer on stdout, handling the full int range.
*/

#include "utilslib.h"

int my_put_nbr(int nb)
{
    long value = nb;

    if (value < 0) {
        my_putchar('-');
        value = -value;
    }
    if (value >= 10)
        my_put_nbr((int)(value / 10));
    my_putchar((char)((value % 10) + '0'));
    return SUCCESS;
}
