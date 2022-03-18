/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void free_tab(int **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

static void free_all(map_t *map)
{
    free_tab(map->map);
    free_tab(map->water_map);
    free_tab(map->texture_map);
    free(map->btn);
    free(map->btn_e);
    free(map->btn_r);
    free(map->btn_t);
    free(map->point);
    free(map->texture);
    free(map->bool_e);
    free(map->bool_r);
}

void destroy_all(map_t *map, window_t *window)
{
    free_all(map);
    sfMusic_destroy(map->music->music);
    sfSound_destroy(map->sound->sound);
    sfClock_destroy(map->actual_time);
    sfSoundBuffer_destroy(map->sound->buffer);
    sfRenderWindow_destroy(window->wd);
}
