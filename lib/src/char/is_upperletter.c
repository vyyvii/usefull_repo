/*
** EPITECH PROJECT, 2026
** is_upperletter
** File description:
** Return 1 if the character is an upper letter, otherwise 0.
*/

#include "utilslib.h"

int is_upperletter(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
