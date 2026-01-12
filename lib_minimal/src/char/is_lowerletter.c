/*
** EPITECH PROJECT, 2026
** is_lowerletter
** File description:
** Return 1 if the character is a lower letter, otherwise 0.
*/

#include "utilslib.h"

int is_lowerletter(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}
