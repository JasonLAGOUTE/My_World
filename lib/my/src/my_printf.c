/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** first file for my_printf
*/

#include "my.h"

static int search_flag(char flag, va_list list)
{
    for (size_t i = 0; i <= 10; i++) {
        if (UTILS[i].flag == flag)
            UTILS[i].fn(list);
    }
    return 0;
}

static int flag_bool(char c)
{
    char *lst = "dibuxXosc%";

    for (size_t i = 0; lst[i] != '\0'; i++) {
        if (lst[i] == c)
            return 1;
    }
    return 0;
}

void my_printf(char *str, ...)
{
    va_list list;

    va_start(list, str);
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && flag_bool(str[i + 1])) {
            search_flag(str[i + 1], list);
            i++;
        } else {
            my_putchar(str[i]);
        }
    }
    va_end(list);
}
