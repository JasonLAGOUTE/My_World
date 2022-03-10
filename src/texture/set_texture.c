/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void set_texture(font_map_t *font_map, menu_t *menu)
{
    sfSprite_setTexture(font_map->sprite, font_map->texture, sfTrue);
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
}
