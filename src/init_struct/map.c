/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

image_t *init_struct_map(void)
{
    image_t *f_map = malloc(sizeof(image_t));

    f_map->sprite = sfSprite_create();
    f_map->texture = sfTexture_createFromFile("img/background.png", NULL);
    return f_map;
}
