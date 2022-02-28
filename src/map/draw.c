/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit_draw(map_t *map, sfRenderWindow *window, int i, int j)
{
    all_textures_t *texture = NULL;
    
    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        map->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
        map->points2 = to2d(map->points3d, map->cam);
        map->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
        map->points3 = to2d(map->points3d, map->cam);
        map->points3d = (sfVector3f){i + 1, j + 1, map->map[i + 1][j + 1]};
        map->points4 = to2d(map->points3d, map->cam);
        texture = init_struct_all_textures();
        sfRenderWindow_drawVertexArray(window,
            create_triangle_right(&map->points, &map->points4, &map->points3),
            texture->red_sand->state);
        sfRenderWindow_drawVertexArray(window, 
            create_triangle_left(&map->points, &map->points4, &map->points2),
            texture->red_sand->state);
        free(texture->red_sand);
    }
}

sfCircleShape *create_circle(float pos1, float pos2, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle, (sfVector2f){pos1-(radius), pos2-(radius)});
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, (sfColor){255, 255, 255, 0});
    sfCircleShape_setOutlineColor(circle, (sfColor){255, 255, 255, 255});
    sfCircleShape_setOutlineThickness(circle, 2);
    return circle;
}
static void condit(map_t *map, sfRenderWindow *window, int i, int j)
{
    condit_draw(map, window, i, j);
    if (i + 1 < MAP_X) {
        map->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
        map->points2 = to2d(map->points3d, map->cam);
        sfRenderWindow_drawVertexArray(window, 
            create_line(&map->points, &map->points2), NULL);
    }
    if (j + 1 < MAP_Y) {
        map->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
        map->points2 = to2d(map->points3d, map->cam);
        sfRenderWindow_drawVertexArray(window, 
            create_line(&map->points, &map->points2), NULL);
    }
}

void draw_map(sfRenderWindow *window, camera_t cam, map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->points = to2d(map->points3d, cam);
            condit(map, window, i, j);
            sfCircleShape *circle = create_circle(map->points.x, map->points.y, (float)sqrt(cam.radius));
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}
