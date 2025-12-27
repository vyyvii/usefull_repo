/*
** EPITECH PROJECT, 2025
** my_getnbr
** File description:
** Write a function that returns a number, sent to the function as a string.
*/

#include "utilslib.h"

int my_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
