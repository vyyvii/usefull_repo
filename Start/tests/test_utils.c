/*
** EPITECH PROJECT, 2026
** secured
** File description:
** Main file for cmocka test
*/

#include "tests.h"

char *capture_stdout(void (*func)(void))
{
    int pipefd[2];
    int saved_stdout;
    char buffer[4096];
    ssize_t size;

    pipe(pipefd);
    saved_stdout = dup(STDOUT_FILENO);
    dup2(pipefd[1], STDOUT_FILENO);
    close(pipefd[1]);
    func();
    fflush(stdout);
    dup2(saved_stdout, STDOUT_FILENO);
    close(saved_stdout);
    size = read(pipefd[0], buffer, sizeof(buffer) - 1);
    close(pipefd[0]);
    buffer[size] = '\0';
    return strdup(buffer);
}

int main(void)
{
    // const struct CMUnitTest tests[] = {
    //     cmocka_unit_test(test_empty_parameters),
    // };

    // return cmocka_run_group_tests(tests, NULL, NULL);
}
