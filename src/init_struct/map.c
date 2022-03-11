/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

font_map_t *init_struct_map(void)
{
    font_map_t *f_map = malloc(sizeof(font_map_t));

    f_map->sprite = sfSprite_create();
    f_map->texture = sfTexture_createFromFile("img/background.png", NULL);
    return f_map;
}