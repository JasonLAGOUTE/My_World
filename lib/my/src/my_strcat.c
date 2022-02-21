/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** function concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    size_t idx = my_strlen(dest);
    size_t i = 0;

    for (; src[i] != '\0'; i++)
        dest[idx + i] = src[i];
    dest[i] = '\0';
    return dest;
}
