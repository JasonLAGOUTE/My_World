/*
** EPITECH PROJECT, 2022
** edit.c
** File description:
** edit
*/

#include "my_world.h"

textures_t *init_struct_texture(char *path)
{
    textures_t *s = malloc(sizeof(textures_t));

    s->state = malloc(sizeof(sfRenderStates));
    s->state->blendMode = sfBlendAlpha;
    s->state->transform = sfTransform_Identity;
    s->state->texture = sfTexture_createFromFile(path, NULL);
    s->state->shader = NULL;
    return s;
}
