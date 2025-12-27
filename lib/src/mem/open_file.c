/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** open_file
** WARNING: THIS FUNCTION MAY USE BAN FUNCTIONS ! (open, read, close)
*/

#include "lib.h"
#include <fcntl.h>

static int buffer_realoc(size_t *tot, size_t len, char **buffer)
{
    char *tmp;

    if (len + 1 >= *tot) {
        *tot *= 2;
        tmp = realloc(*buffer, *tot);
        if (!tmp)
            return 84;
        *buffer = tmp;
    }
    return 0;
}

static int file_runner(int fd, size_t *tot, char **buffer)
{
    size_t len = 0;
    ssize_t size = 0;
    char c;

    size = read(fd, &c, 1);
    while (size == 1) {
        if (buffer_realoc(tot, len, buffer) == 84)
            return 84;
        (*buffer)[len] = c;
        len++;
        size = read(fd, &c, 1);
    }
    if (size < 0)
        return 84;
    (*buffer)[len] = '\0';
    return 0;
}

char *open_file(char *file)
{
    int fd = open(file, O_RDONLY);
    size_t tot = 8;
    char *buffer = malloc(tot);

    if (!buffer)
        return NULL;
    if (fd == -1) {
        free(buffer);
        return NULL;
    }
    if (file_runner(fd, &tot, &buffer) == 84) {
        free(buffer);
        close(fd);
        return NULL;
    }
    close(fd);
    return buffer;
}
