/*
** EPITECH PROJECT, 2025
** my_swap
** File description:
** Write a function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

#include "lib.h"

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
