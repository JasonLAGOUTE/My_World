/*
** EPITECH PROJECT, 2022
** my_getnbr_base
** File description:
** my_getnbr_base
*/

#include "my.h"

void my_putnbr_base(int nb, char const *base)
{
    int rest = 0;

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    rest = nb % (my_strlen(base));
    nb = nb / (my_strlen(base));
    if (nb > 0)
        my_putnbr_base(nb, base);
    my_putchar(base[rest]);
}
