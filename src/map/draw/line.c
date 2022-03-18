/*
** EPITECH PROJECT, 2022
** line.c
** File description:
** line
*/

#include "my_world.h"

static void condit(map_t *map, sfRenderWindow *window, int i, int j)
{
    sfVertexArray *line_1;
    sfVertexArray *line_2;
    
    if (i + 1 < MAP_X) {
        map->point->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
        map->point->points2 = to2d(map->point->points3d, map);
        line_1 = create_line(&map->point->points, &map->point->points2);
        sfRenderWindow_drawVertexArray(window, line_1, NULL);
    }
    if (j + 1 < MAP_Y) {
        map->point->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
        map->point->points2 = to2d(map->point->points3d, map);
        line_2 = create_line(&map->point->points, &map->point->points2);
        sfRenderWindow_drawVertexArray(window, line_2, NULL);
    }
    sfVertexArray_destroy(line_1);
    sfVertexArray_destroy(line_2);
}

void draw_line(sfRenderWindow *window ,map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->point->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->point->points = to2d(map->point->points3d, map);
            condit(map, window, i, j);
        }
    }
}
