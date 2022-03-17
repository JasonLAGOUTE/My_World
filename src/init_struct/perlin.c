/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

perlin_t *init_struct_perlin(void)
{
    perlin_t *perlin = malloc(sizeof(perlin_t));

    perlin->Cx = 0;
    perlin->Cy = 0;
    perlin->gi0 = 0;
    perlin->gi1 = 0;
    perlin->gi2 = 0;
    perlin->gi3 = 0;
    perlin->Li1 = 0;
    perlin->Li2 = 0;
    perlin->s = 0;
    perlin->t = 0;
    perlin->tmp = 0;
    perlin->u = 0;
    return perlin;
}
