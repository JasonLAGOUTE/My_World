/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_shuffle(sfEvent event, map_t *map)
{
    if (event.key.code == sfKeyR)
        shuffle_map(map);
}
