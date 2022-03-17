/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(map_t *map, int i, int j)
{
    map->point->points3d = (sfVector3f){i, j + 1, map->map[i][j + 1]};
    map->point->points2 = to2d(map->point->points3d, map);
    map->point->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
    map->point->points3 = to2d(map->point->points3d, map);
    map->point->points3d = (sfVector3f){i + 1, j + 1, map->map[i + 1][j + 1]};
    map->point->points4 = to2d(map->point->points3d, map);
}

static void condit_draw(map_t *map, sfRenderWindow *w, int i, int j)
{
    sfColor colors_1 = sfWhite;
    sfColor colors_2 = sfWhite;

    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        condit(map, i, j);
        if (map->bool_r->texture == 1) {
            colors_1 = sfTransparent;
            colors_2 = sfTransparent;
        } else if (map->bool_r->texture == 0 && map->bool_r->light == 0) {
            colors_1 = get_right_color(map, i, j);
            colors_2 = get_left_color(map, i, j);
        }
        sfRenderWindow_drawVertexArray(w, crt_triangle_r(&map->point->points,
            &map->point->points4, &map->point->points3, colors_1),
                map->texture->tab[map->texture_map[i][j]]->state);
        sfRenderWindow_drawVertexArray(w, crt_triangle_l(&map->point->points,
            &map->point->points4, &map->point->points2, colors_2),
                map->texture->tab[map->texture_map[i][j]]->state);
    }
}

static void condit_2(map_t *map, sfRenderWindow *window, int i, int j)
{
    first_water_cube(window, map);
    second_water_cube(window, map);
    if (map->bool_r->texture == 0)
        draw_water(map, window, i, j);
}

void draw_map(map_t *map, sfRenderWindow *window)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->point->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->point->points = to2d(map->point->points3d, map);
            condit_draw(map, window, i, j);
            condit_2(map, window, i, j);
        }
    }
}
