/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_radius(sfEvent event,  map_t *map)
{
    if (event.key.code == sfKeyK)
        map->cam.radius -= 50;
    if (event.key.code == sfKeyJ)
        map->cam.radius += 50;
}
