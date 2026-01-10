/*
** EPITECH PROJECT, 2026
** ac
** File description:
** Count the number of arguments in a NULL-terminated array.
*/

#include "utilslib.h"

int nb_args(char **args)
{
    int nb_args = 0;

    while (args[nb_args])
        nb_args++;
    return nb_args;
}
