/*
** EPITECH PROJECT, 2022
** map.c
** File description:
** all function for the map
*/

#include "my.h"

char *my_strdup(const char *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    if (dest == NULL)
        return NULL;
    dest[0] = '\0';
    my_strcat(dest, src);
    return dest;
}
