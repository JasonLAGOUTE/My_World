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