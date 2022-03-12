/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_angle(sfEvent event,  map_t *map)
{
    if (event.key.code == sfKeyE)
        map->cam.angle.y -= 1;
    if (event.key.code == sfKeyA)
        map->cam.angle.y += 1;
}
