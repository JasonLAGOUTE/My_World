/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit_draw(map_t *map, sfRenderWindow *window, int i, int j)
{
    sfColor colors_1 = sfWhite;
    sfColor colors_2 = sfWhite;

    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        map->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
        map->points2 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
        map->points3 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i + 1, j + 1, map->map[i + 1][j + 1]};
        map->points4 = to2d(map->points3d, map);
        colors_1 = get_right_color(map, i, j);
        colors_2 = get_left_color(map, i, j);
        sfRenderWindow_drawVertexArray(window, crt_triangle_r(&map->points,
            &map->points4, &map->points3, colors_1),
                map->texture->tab[map->texture_map[i][j]]->state);
        sfRenderWindow_drawVertexArray(window, crt_triangle_l(&map->points,
            &map->points4, &map->points2, colors_2),
                map->texture->tab[map->texture_map[i][j]]->state);
    }
}

static void draw_water(map_t *map, sfRenderWindow *window, int i, int j)
{
    sfColor colors_1 = sfWhite;
    sfColor colors_2 = sfWhite;

    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        water_shuffle_map(map);
        if (map->map[i][j] < 2 && map->map[i + 1][j] < 2 &&
         map->map[i][j + 1] < 2 && map->map[i + 1][j + 1] < 2 ) {
            map->points3d = (sfVector3f){i, j, map->water_map[i][j]};
                map->points = to2d(map->points3d, map);
            map->points3d = (sfVector3f){i, j + 1, map->water_map[i][j + 1]};
            map->points2 = to2d(map->points3d, map);
            map->points3d = (sfVector3f){i + 1, j, map->water_map[i + 1][j]};
            map->points3 = to2d(map->points3d, map);
            map->points3d = (sfVector3f){i + 1, j + 1, map->map[i + 1][j + 1]};
            map->points4 = to2d(map->points3d, map);
            colors_1 = water_get_right_color(map, i, j);
            colors_2 = water_get_left_color(map, i, j);
            sfRenderWindow_drawVertexArray(window, crt_triangle_r(&map->points,
                &map->points4, &map->points3, colors_1),
                    map->texture->tab[WATER3]->state);
            sfRenderWindow_drawVertexArray(window, crt_triangle_l(&map->points,
                &map->points4, &map->points2, colors_2),
                    map->texture->tab[WATER3]->state);
        }
    }
}

void draw_map(map_t *map, sfRenderWindow *window)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->points = to2d(map->points3d, map);
            condit_draw(map, window, i, j);
            draw_water(map, window, i, j);
        }
    }
}
