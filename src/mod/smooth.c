/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_smooth(sfEvent event, map_t *map)
{
    if (event.key.code == sfKeyL)
        smooth_map(map);
}
