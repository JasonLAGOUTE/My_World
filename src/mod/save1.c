/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_save(sfEvent event,  map_t *map)
{
    if (event.key.code == sfKeyS)
        save_map(map);
}
