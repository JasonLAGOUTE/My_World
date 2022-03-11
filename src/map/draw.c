/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit_draw(map_t *map, sfRenderWindow *window, int i, int j)
{
    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        map->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
        map->points2 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
        map->points3 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i + 1, j + 1, map->map[i + 1][j + 1]};
        map->points4 = to2d(map->points3d, map);
        sfRenderWindow_drawVertexArray(window,
            create_triangle_right(&map->points, &map->points4, &map->points3),
            map->texture->textures_tab[map->texture_map[i][j]]->state);
        sfRenderWindow_drawVertexArray(window,
            create_triangle_left(&map->points, &map->points4, &map->points2),
            map->texture->textures_tab[map->texture_map[i][j]]->state);
    }
}

sfCircleShape *create_circle(float pos1, float pos2, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle,
        (sfVector2f){pos1-(radius), pos2-(radius)});
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
        map->points2 = to2d(map->points3d, map);
        sfRenderWindow_drawVertexArray(window, 
            create_line(&map->points, &map->points2), NULL);
    }
    if (j + 1 < MAP_Y) {
        map->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
        map->points2 = to2d(map->points3d, map);
        sfRenderWindow_drawVertexArray(window, 
            create_line(&map->points, &map->points2), NULL);
    }
}

void draw_map(sfRenderWindow *window, map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->points = to2d(map->points3d, map);
            condit(map, window, i, j);
            sfCircleShape *circle = create_circle(map->points.x, map->points.y,
                (float)sqrt(map->cam.radius));
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
    for (int i = 0; i < LAST; i++) {
        sfRenderWindow_drawRectangleShape(window, map->button->tab_textures[i]->rect, NULL);
        sfRenderWindow_drawText(window, map->button->tab_textures[i]->text, NULL);
    }
    for (int i = 0; i < LAST_BARRE; i++) {
        sfRenderWindow_drawRectangleShape(window, map->buttons->tab_textures[i]->rect, NULL);
        sfRenderWindow_drawText(window, map->buttons->tab_textures[i]->text, NULL);
    }
}
