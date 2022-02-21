/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copie n character
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src, size_t n)
{
    size_t i = 0;

    for (; i < n; i++)
        dest[i] = src[i];
    if (n > i)
        dest[i + 1] = '\0';
    return dest;
}
