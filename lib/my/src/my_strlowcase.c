/*
** EPITECH PROJECT, 2022
** my_strlowcase.c
** File description:
** puts letter in lowercase
*/

#include <unistd.h>

char *my_strlowcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}
