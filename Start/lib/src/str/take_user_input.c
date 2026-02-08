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

    len = getline(input, &size, stdin);
    if (len == -1)
        return FAILURE;
    else if (len > 0 && (*input)[len - 1] == '\n')
        (*input)[len - 1] = '\0';
    return SUCCESS;
}
