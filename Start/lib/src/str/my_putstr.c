/*
** EPITECH PROJECT, 2026
** my_putstr
** File description:
** Print a null-terminated string to stdout, character by character.
*/

#include "utilslib.h"

int my_putstr(char const *str)
{
    if (!str)
        return FAILURE;
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return SUCCESS;
}
