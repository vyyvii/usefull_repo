/*
** EPITECH PROJECT, 2025
** square_root
** File description:
** square_root
*/

int square_root(int nb)
{
    if (nb <= 0)
        return 0;
    for (int i = 1; i * i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
