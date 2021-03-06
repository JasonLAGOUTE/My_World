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

bool point_triangl (sfVector2f pt, sfVector2f v1, sfVector2f v2, sfVector2f v3)
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

void create_plate(map_t *map, sfVector2i coord)
{
    if (map->is_editing == 1) {
        map->map[coord.x][coord.y] += map->cam.edit_strenght;
        map->map[coord.x + 1][coord.y] += map->cam.edit_strenght;
        map->map[coord.x][coord.y + 1] += map->cam.edit_strenght;
        map->map[coord.x + 1][coord.y + 1] += map->cam.edit_strenght;
    } else
        map->texture_map[coord.x][coord.y] = map->actual;
}

void edit_point(map_t *ma, sfVector2f mouse, sfVector2i co)
{
    sfVector3f point_3d = {co.x, co.y, ma->map[co.x][co.y]};
    sfVector2f p_2d = to2d(point_3d, ma);
    sfVector2f *p2d = malloc(sizeof(sfVector2f) * 4);
    sfVector3f *p3d = malloc(sizeof(sfVector3f) * 4);
    float distance = pow(p_2d.x -mouse.x,2) + pow(p_2d.y - mouse.y,2);

    if (distance < (float)ma->cam.radius)
        ma->map[co.x][co.y] += ma->cam.edit_strenght;
    else if ((co.y + 1 < MAP_Y) && (co.x + 1 < MAP_X)) {
        p3d[0] = (sfVector3f){co.x + 1, co.y, ma->map[co.x + 1][co.y]};
        p3d[1] = (sfVector3f){co.x, co.y + 1, ma->map[co.x][co.y + 1]};
        p3d[2] = (sfVector3f){co.x + 1, co.y + 1, ma->map[co.x + 1][co.y + 1]};
        p2d[0] = to2d(p3d[0], ma);
        p2d[1] = to2d(p3d[1], ma);
        p2d[2] = to2d(p3d[2], ma);
        if (point_triangl(mouse, p_2d, p2d[2], p2d[0]) == 1)
            create_plate(ma, co);
        if (point_triangl(mouse, p_2d, p2d[2], p2d[1]) == 1)
            create_plate(ma, co);
    }
}

void edit_map(map_t *map, sfEvent event)
{
    float x = event.mouseButton.x;
    float y = event.mouseButton.y;
    sfVector2f mouse = {x, y};

    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++)
            edit_point(map, mouse, (sfVector2i){i, j});
    }
}
