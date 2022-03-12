/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_zoom(sfEvent event,  map_t *map)
{
    if (event.key.code == sfKeyAdd)
        map->cam.zoom += 2;
    if (event.key.code == sfKeySubtract)
        map->cam.zoom -= 2;
}
