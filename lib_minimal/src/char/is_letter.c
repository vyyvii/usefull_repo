/*
** EPITECH PROJECT, 2026
** is_letter
** File description:
** Return 1 if the character is a letter, otherwise 0.
*/

#include "utilslib.h"

int is_letter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}
