/*
** EPITECH PROJECT, 2022
** circle.c
** File description:
** line
*/

#include "my_world.h"

void draw_circle(sfRenderWindow *window ,map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->points = to2d(map->points3d, map);
            sfCircleShape *circle = create_circle(map->points.x, map->points.y,
                (float)sqrt(map->cam.radius));
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}
