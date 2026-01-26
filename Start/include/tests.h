/*
** EPITECH PROJECT, 2026
** [project]
** File description:
** Header file for [project] TESTS
*/

#ifndef TEST_H
    #define TEST_H
    #include <stddef.h>
    #include <stdarg.h>
    #include <setjmp.h>
    #include <cmocka.h>
    #include "my.h"

// MAIN
char *capture_stdout(void (*func)(void));

#endif /* TEST_H */
