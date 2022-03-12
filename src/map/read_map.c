/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void load_map(map_t *map)
{
    FILE* input;
    input = fopen("Save.map", "rb");
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            fread(&map->map[i][j], sizeof(int), 1, input);
            fread(&map->texture_map[i][j], sizeof(int), 1, input);
        }
    }
    fclose(input);
}
