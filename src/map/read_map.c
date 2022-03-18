/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void zero_map(map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->map[i][j] = 0;
            map->texture_map[i][j] = 0;
        }
    }
}

void load_map(map_t *map)
{
    FILE* input;
    input = fopen("Save.map", "rb");
    if (input == NULL ) {
        zero_map(map);
        return;
    }
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            fread(&map->map[i][j], sizeof(int), 1, input);
            fread(&map->texture_map[i][j], sizeof(int), 1, input);
        }
    }
    fclose(input);
}
