/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** counts number of characters in the string
*/

#include "my.h"

int my_strlen(char const *str)
{
    size_t compt = 0;

    while (*str) {
        compt++;
        str++;
    }
    return compt;
}
