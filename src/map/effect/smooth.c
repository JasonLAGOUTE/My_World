/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void smooth_map(map_t *map)
{
    int smooth = 0;

    for (int i = 1; i < MAP_X - 1; i++) {
        for (int j = 1; j < MAP_Y - 1; j++) {
            smooth = map->map[i - 1][j] + map->map[i][j - 1] +  map->map[i][j];
            smooth = map->map[i + 1][j] + map->map[i][j + 1] +  map->map[i][j];
            smooth /= 6;
            map->map[i][j] = smooth;
        }
    }
}

void smooth_water_map(map_t *map)
{
    int smooth = 0;

    for (int i = 1; i < MAP_X - 1; i++) {
        for (int j = 1; j < MAP_Y - 1; j++) {
            smooth = map->water_map[i - 1][j] + map->water_map[i][j - 1] +  map->water_map[i][j];
            smooth = map->water_map[i + 1][j] + map->water_map[i][j + 1] +  map->water_map[i][j];
            smooth /= 6;
            map->water_map[i][j] = smooth;
        }
    }
}