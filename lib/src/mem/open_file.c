/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** Read an entire file into a newly allocated buffer (open/read/close).
** WARNING: THIS FUNCTION MAY USE BAN FUNCTIONS ! (open, read, close)
*/

#include "utilslib.h"
#include <fcntl.h>

static int buffer_realoc(size_t *tot, size_t len, size_t read_size,
    char **buffer)
{
    char *new_buffer;

    if (len + read_size + 1 > *tot) {
        while (len + read_size + 1 > *tot)
            *tot *= 2;
        new_buffer = realloc(*buffer, *tot);
        if (!new_buffer)
            return 84;
        *buffer = new_buffer;
    }
    return 0;
}

static int file_runner(int fd, size_t *tot, char **buffer)
{
    size_t len = 0;
    char tmp[100];
    ssize_t read_size = read(fd, tmp, 100);

    while (read_size > 0) {
        if (buffer_realoc(tot, len, read_size, buffer) == 84)
            return 84;
        memcpy(*buffer + len, tmp, read_size);
        len += read_size;
        read_size = read(fd, tmp, 100);
    }
    if (read_size < 0)
        return 84;
    (*buffer)[len] = '\0';
    return 0;
}

char *open_file(char *file)
{
    int fd = open(file, O_RDONLY);
    size_t tot = 16084;
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
