/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_offset(sfEvent event,  map_t *map)
{
    if (event.key.code == sfKeyDown)
        map->cam.offset.y += 10;
    if (event.key.code == sfKeyUp)
        map->cam.offset.y -= 10;
    if (event.key.code == sfKeyRight)
        map->cam.offset.x += 10;
    if (event.key.code == sfKeyLeft)
        map->cam.offset.x -= 10;
}
