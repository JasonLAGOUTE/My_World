/*
** EPITECH PROJECT, 2022
** circle.c
** File description:
** line
*/

#include "my_world.h"

void draw_circle(sfRenderWindow *window ,map_t *map)
{
    sfCircleShape *circle;
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->point->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->point->points = to2d(map->point->points3d, map);
            circle = create_circle(map->point->points.x,
                map->point->points.y, (float)sqrt(map->cam.radius));
            sfRenderWindow_drawCircleShape(window, circle, NULL);
            sfCircleShape_destroy(circle);
        }
    }
}
