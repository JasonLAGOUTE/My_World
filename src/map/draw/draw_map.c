/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(map_t *m, int i, int j)
{
    m->point->points3d = (sfVector3f){i, j + 1, m->map[i][j + 1]};
    m->point->points2 = to2d(m->point->points3d, m);
    m->point->points3d = (sfVector3f){i + 1, j, m->map[i + 1][j]};
    m->point->points3 = to2d(m->point->points3d, m);
    m->point->points3d = (sfVector3f){i + 1, j + 1, m->map[i + 1][j + 1]};
    m->point->points4 = to2d(m->point->points3d, m);
}

static int choice_texture(map_t *m, int i, int j)
{
    int texture = m->texture_map[i][j];

    if (m->texture_map[i][j] == 0) {
        texture = (m->map[i][j] > 0) ? GRASS : 1;
        texture = (m->map[i][j] > 25) ? STONE : texture;
        texture = (m->map[i][j] > 33) ? SNOW : texture;
    }
    return texture;
}

static void condit_draw(map_t *m, sfRenderWindow *w, int i, int j)
{
    sfColor c_1 = sfWhite;
    sfColor c_2 = sfWhite;
    sfVertexArray *tri_1;
    sfVertexArray *tri_2;
    int texture = 0;

    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        condit(m, i, j);
        if (m->bool_r->texture == 1) {
            c_1 = sfTransparent;
            c_2 = sfTransparent;
        } else if (m->bool_r->texture == 0 && m->bool_r->light == 0) {
            c_1 = get_right_color(m, i, j);
            c_2 = get_left_color(m, i, j);
        }
        tri_1 = fill_tri_map(m, c_1, m->point->points4, m->point->points3);
        tri_2 = fill_tri_map(m, c_2, m->point->points4, m->point->points2);
        texture = choice_texture(m, i, j);
        display_vertex(w, tri_1, tri_2, m->texture->tab[texture]->state);
    }
}

static void condit_2(map_t *map, sfRenderWindow *window, int i, int j)
{
    if (map->bool_r->texture == 0) {
        first_water_cube(window, map);
        second_water_cube(window, map);
        draw_water(map, window, i, j);
    }
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
