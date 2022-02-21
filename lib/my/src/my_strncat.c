/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** str with n arguments
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, size_t nb)
{
    size_t i = my_strlen(dest);

    for (size_t r = 0; i < nb && src[r] != '\0'; r++) {
        dest[i] += src[r];
        i++;
    }
    return dest;
}
