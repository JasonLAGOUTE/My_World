/*
** EPITECH PROJECT, 2022
** edit.c
** File description:
** edit
*/

#include "my_world.h"

float sign (sfVector2f p1, sfVector2f p2, sfVector2f p3)
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool PointInTriangle (sfVector2f pt, sfVector2f v1, sfVector2f v2, sfVector2f v3)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, v1, v2);
    d2 = sign(pt, v2, v3);
    d3 = sign(pt, v3, v1);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}

void create_plate(map_t *map, camera_t cam, sfVector2i coord)
{
    map->map[coord.x][coord.y]+=cam.edit_strenght;
    map->map[coord.x+1][coord.y]+=cam.edit_strenght;
    map->map[coord.x][coord.y+1]+=cam.edit_strenght;
    map->map[coord.x+1][coord.y+1]+=cam.edit_strenght;
}

void edit_point(map_t *map, sfVector2f mouse, camera_t cam, sfVector2i coord)
{
    sfVector3f point_3d = {0, 0, 0};
    sfVector2f p_2d = {0, 0};
    sfVector2f *point2d = malloc(sizeof(sfVector2f) * 4);
    sfVector3f *point3d = malloc(sizeof(sfVector3f) * 4);
    point_3d = (sfVector3f){coord.x, coord.y, map->map[coord.x][coord.y]};
    p_2d = to2d(point_3d, cam);
    float distance = pow(p_2d.x -mouse.x,2) + pow(p_2d.y - mouse.y,2);
    if (distance < (float)cam.radius)
        map->map[coord.x][coord.y] += cam.edit_strenght;
    else {
        if ((coord.y + 1 < MAP_Y) && (coord.x + 1 < MAP_X)) {
            point3d[0] = (sfVector3f){coord.x + 1, coord.y, map->map[coord.x + 1][coord.y]};
            point3d[1] = (sfVector3f){coord.x, coord.y + 1, map->map[coord.x][coord.y + 1]};
            point3d[2] = (sfVector3f){coord.x + 1, coord.y + 1, map->map[coord.x + 1][coord.y + 1]};
            point2d[0] = to2d(point3d[0], map->cam);
            point2d[1] = to2d(point3d[1], map->cam);
            point2d[2] = to2d(point3d[2], map->cam);
            if (PointInTriangle(mouse, p_2d, point2d[2], point2d[0]) == 1) {
                create_plate(map, cam, coord);
            }
            if (PointInTriangle(mouse, p_2d, point2d[2], point2d[1]) == 1) {
                create_plate(map, cam, coord);
            }
        }
    }
}

void edit_map(map_t *map, sfEvent event, camera_t cam)
{
    
    float x = event.mouseButton.x;
    float y = event.mouseButton.y;
    sfVector2f mouse = {x, y};
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            edit_point(map, mouse, cam, (sfVector2i){i, j});
        }
    }
}