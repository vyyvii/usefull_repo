/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup str
 * @brief Converts 4 bits into a hex value.
 * @param b The 4 bits
 * @return The hex value of the 4 bits.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char to_hex(unsigned char b)
{
    return (b < 10) ? '0' + b : 'a' + (b - 10);
}

/**
 * @ingroup str
 * @brief Converts a byte (8 bits) into hex value.
 * @param b The byte
 * @return Nothing
 * @note Part of UtilsLib by Victor Defauchy.
 */
void print_bytes(unsigned char b)
{
    char hex[3];

    hex[0] = to_hex(b / 16);
    hex[1] = to_hex(b % 16);
    hex[2] = '\0';
    my_putstr(hex);
    my_putchar(' ');
}
