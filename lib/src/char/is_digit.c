/*
** EPITECH PROJECT, 2026
** is_digit
** File description:
** Return 1 if the character is a decimal digit, otherwise 0.
*/

#include "utilslib.h"

int my_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
