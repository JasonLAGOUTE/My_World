/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** puts letter in suppercase
*/

#include <unistd.h>

char *my_strupcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}
