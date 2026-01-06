/*
** EPITECH PROJECT, 2026
** test utils
** File description:
** test_utils
*/

#include "tests.h"

/////////////////////////////
// UTILS redirect_all_std()
/////////////////////////////
void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
