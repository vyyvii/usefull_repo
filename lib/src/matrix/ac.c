/*
** EPITECH PROJECT, 2025
** ac
** File description:
** Return the number of arguments (like ac for **av)
*/

#include "lib.h"

int nb_args(char **args)
{
    int nb_args = 0;

    while (args[nb_args])
        nb_args++;
    return nb_args;
}
