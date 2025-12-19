/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** open_file
*/

#include "lib.h"
#include <fcntl.h>

char *open_file(char *file)
{
    int fd = open(file, O_RDONLY);
    char *buffer;
    int size;

    if (fd == -1)
        return NULL;
    buffer = smalloc(MAX_BUFFER);
    size = read(fd, buffer, MAX_BUFFER - 1);
    if (size < 0) {
        free(buffer);
        close(fd);
        return NULL;
    }
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
