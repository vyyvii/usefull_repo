/*
** EPITECH PROJECT, 2026
** [project]
** File description:
** TESTS
*/

#include "tests.h"

// EXAMPLE:
// Test(main_func, help_flag, .init = redirect_all_std)
// {
//     char *av[] = {"./file", "-h", NULL};

//     cr_assert_eq(main_func(2, av), SUCCESS);
// }

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
