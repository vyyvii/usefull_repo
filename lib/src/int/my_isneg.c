/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** Write a function that displays either N if the integer passed as
** parameter is negative or P, if positive or null.
*/

#include "lib.h"

int my_isneg(int n)
{
    char letter = '\0';

    if (n >= 0)
        letter = 80;
    else
        letter = 78;
    my_putchar(letter);
    return 0;
}
