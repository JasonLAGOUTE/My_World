/*
** EPITECH PROJECT, 2022
** my_intdup
** File description:
** Allocates memory and copies the string given as argument in it
*/

#include "my.h"

int *my_intdup(int const *nb, size_t size)
{
    int *dest = malloc(sizeof(int) * (size + 1));

    if (dest == NULL)
        return NULL;
    for (size_t i = 0; i < size; i++)
        dest[i] = nb[i];
    return dest;
}
