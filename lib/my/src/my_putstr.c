/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** write characters of a string one by one
*/

#include "my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
