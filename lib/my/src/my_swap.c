/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swaps two integers
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    const int temp = *b;
    *b = *a;
    *a = temp;
}
