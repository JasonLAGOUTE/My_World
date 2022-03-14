/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

bool_render_t *init_struct_bool_render(void)
{
    bool_render_t *rd = malloc(sizeof(bool_render_t));

    rd->cube = 0;
    rd->light = 0;
    rd->line = 0;
    rd->point = 0;
    rd->texture = 0;
    return rd;
}
