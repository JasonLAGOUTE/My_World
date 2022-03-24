/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** capitalizes the first letter of each word
*/

#include <stdlib.h>

static void condit(size_t i, char *str)
{
    if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
        str[i + 1] -= 32;
}

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            condit(i, str);
    }
    return str;
}
