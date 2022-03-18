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

bool_edit_t *init_struct_bool_edit(void)
{
    bool_edit_t *ed = malloc(sizeof(bool_edit_t));

    ed->edit_strenght = 0;
    ed->radius = 0;
    ed->ran_gen = 0;
    ed->reset = 0;
    ed->water_height = 0;
    return ed;
}
