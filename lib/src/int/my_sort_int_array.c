/*
** EPITECH PROJECT, 2025
** my_sort_int_array
** File description:
** Write a function that sorts an integer array in ascending order,
** given a pointer to the first element of the array and its size.
*/

#include "lib.h"

void my_sort_int_array(int *array, int size)
{
    int switcher;

    for (int i = 1; i != size; i++) {
        while (array[i] < array[i - 1] && i > 0) {
            switcher = array[i];
            array[i] = array[i - 1];
            array[i - 1] = switcher;
            i--;
        }
    }
}
