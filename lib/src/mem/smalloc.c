/*
** EPITECH PROJECT, 2025
** smalloc
** File description:
** Secure malloc & free
** WARNING: smalloc is not recommanded ! (exit)
*/

#include "lib.h"

void *smalloc(ssize_t size)
{
    void *ptr = malloc(size);

    if (!ptr)
        exit(84);
    return ptr;
}
