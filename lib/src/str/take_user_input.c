/*
** EPITECH PROJECT, 2025
** take_user_input
** File description:
** Take the user input via a getline
*/

#include "lib.h"

int take_user_input(char **input)
{
    size_t size = 0;
    ssize_t len;

    printf("Enter next value: ");
    len = getline(input, &size, stdin);
    if (len == -1)
        return 84;
    (*input)[strcspn(*input, "\n")] = '\0';
    return 0;
}
