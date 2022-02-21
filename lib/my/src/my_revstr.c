/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverses string
*/

#include <unistd.h>

char *my_revstr(char *str)
{
    size_t len = 0;

    for (len = 0; str[len] != '\0'; len++);
    len--;
    for (size_t r = 0; r < len; r++) {
        char temp = str[r];
        str[r] = str[len];
        str[len] = temp;
        len--;
    }
    return str;
}
