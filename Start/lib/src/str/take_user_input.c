/*
** EPITECH PROJECT, 2026
** take_user_input
** File description:
** Read a line from stdin into the provided buffer (uses getline/strcspn).
*/

#include "utilslib.h"

int take_user_input(char **input)
{
    size_t size = 0;
    ssize_t len;

    my_putstr("Enter next value: ");
    len = getline(input, &size, stdin);
    if (len == -1)
        return FAILURE;
    (*input)[strcspn(*input, "\n")] = '\0';
    return SUCCESS;
}
