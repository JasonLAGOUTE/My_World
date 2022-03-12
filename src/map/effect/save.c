/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void save_map(map_t *map)
{
    FILE* output;

    output = fopen("Save.map","wb");
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            fwrite(&map->map[i][j], sizeof(int), 1, output);
            fwrite(&map->texture_map[i][j], sizeof(int), 1, output);
        }
    }
    fclose(output);
}
