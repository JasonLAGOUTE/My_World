/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** put number
*/

#include "my.h"
#include <limits.h>

void my_put_nbr(int nb)
{
    int nb_tmp = 0;
    
    if (nb < 0 && nb > INT_MIN) {
        my_putchar(45);
        nb = nb * (-1);
    } if (nb > 9 && nb <= 2147483647) {
        nb_tmp = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(nb_tmp + 48);
    } else
        my_putchar(nb + 48);
}
