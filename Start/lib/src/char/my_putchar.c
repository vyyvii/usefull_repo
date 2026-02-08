/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup char
 * @brief Writes a character to stdout.
 * @param c Character to write.
 * @return Nothing.
 * @note Complexity: O(1)
 * @note Uses write(2).
 * @note Part of UtilsLib by Victor Defauchy.
 */
void my_putchar(char c)
{
    write(1, &c, 1);
}
