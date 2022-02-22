/*
** EPITECH PROJECT, 2022
** edit.c
** File description:
** edit
*/

#include "my_world.h"

textures_t *init_struct_red_sand(void)
{
    textures_t *s = malloc(sizeof(textures_t));

    s->state = malloc(sizeof(sfRenderStates));
    s->state->blendMode = sfBlendAlpha;
    s->state->transform = sfTransform_Identity;
    s->state->texture = sfTexture_createFromFile("src/img/red_sand.png", NULL);
    s->state->shader = NULL;
    return s;
}

textures_t *init_struct_white_sand(void)
{
    textures_t *s = malloc(sizeof(textures_t));

    s->state = malloc(sizeof(sfRenderStates));
    s->state->blendMode = sfBlendAlpha;
    s->state->transform = sfTransform_Identity;
    s->state->texture = sfTexture_createFromFile("src/img/sand.png", NULL);
    s->state->shader = NULL;
    return s;
}
