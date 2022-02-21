/*
** EPITECH PROJECT, 2022
** print_char.c
** File description:
** printf basic
*/

#include "my.h"

void print_str(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void print_char(va_list list)
{
    my_putchar(va_arg(list, int));
}

void print_mod(va_list list)
{
    (void) list;
    my_putchar('%');
}
