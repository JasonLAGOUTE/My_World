/*
** EPITECH PROJECT, 2022
** print_nb.c
** File description:
** printf basic
*/

#include "my.h"

void print_nb(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void print_nb_b8(va_list list)
{
    my_putnbr_base(va_arg(list, int), "01234567");
}

void print_nb_b(va_list list)
{
    my_putnbr_base(va_arg(list, int), "01");
}

void print_nb_hexamin(va_list list)
{
    my_putnbr_base(va_arg(list, int), "0123456789abcdef");
}

void print_nb_hexamaj(va_list list)
{
    my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
}
