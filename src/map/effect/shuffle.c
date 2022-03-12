/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void shuffle_map(map_t *map)
{
    srand(time(NULL));
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->map[i][j] = rand()%18;
        }
    }
    smooth_map(map);
}
