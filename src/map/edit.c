/*
** EPITECH PROJECT, 2022
** edit.c
** File description:
** edit
*/

#include "my_world.h"

void edit_map(map_t *map, sfEvent event, camera_t cam)
{
    float x = event.mouseButton.x;
    float y = event.mouseButton.y;
    sfVector3f point_3d = {0, 0, 0};
    sfVector2f p_2d = {0, 0};
    float distance = 0;
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            point_3d = (sfVector3f){i, j, map->map[i][j]};
            p_2d = to2d(point_3d, cam);
            distance = pow(p_2d.x - x,2) + pow(p_2d.y - y,2);
            if (distance < (float)100)
                map->map[i][j] +=1;
                printf("i %d, j %d \n", i, j);
        }
    }
}