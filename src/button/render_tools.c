/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void disp_light(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 731 && coord.y <= 804)) && window->menu == false) {
        if (map->bool_barre == 3 && map->bool_r->light == 0) {
            map->bool_r->light = 1;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_LIGHT]->rec,
                sfWhite);
        } else if (map->bool_barre == 3 && map->bool_r->light == 1) {
            map->bool_r->light = 0;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_LIGHT]->rec,
                (sfColor){0, 255, 40, 255});
        }
        play_sound(map);
    }
}

static void disp_cube(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 575 && coord.y <= 648)) && window->menu == false) {
        if (map->bool_barre == 3 && map->bool_r->cube == 0) {
            map->bool_r->cube = 1;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_CUBE]->rec,
                sfWhite);
        } else if (map->bool_barre == 3 && map->bool_r->cube == 1) {
            map->bool_r->cube = 0;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_CUBE]->rec,
                (sfColor){0, 255, 40, 255});
        }
        play_sound(map);
    }
}

static void disp_light_cube_texture(window_t *window,
    sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 419 && coord.y <= 492)) && window->menu == false) {
        if (map->bool_barre == 3 && map->bool_r->texture == 0) {
            map->bool_r->texture = 1;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_TXT]->rec,
                sfWhite);
        } else if (map->bool_barre == 3 && map->bool_r->texture == 1) {
            map->bool_r->texture = 0;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_TXT]->rec,
                (sfColor){0, 255, 40, 255});
        }
        play_sound(map);
    }
    disp_cube(window, coord, map);
    disp_light(window, coord, map);
}

static void disp_point(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 263 && coord.y <= 336)) && window->menu == false) {
        if (map->bool_barre == 3 && map->bool_r->point == 1) {
            map->bool_r->point = 0;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_POINT]->rec,
                sfWhite);
        } else if (map->bool_barre == 3 && map->bool_r->point == 0) {
            map->bool_r->point = 1;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_POINT]->rec,
                (sfColor){0, 255, 40, 255});
        }
        play_sound(map);
    }
}

void button_rander_tool(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 110 && coord.y <= 180)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 3 && map->bool_r->line == 1) {
            map->bool_r->line = 0;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_LINE]->rec,
                sfWhite);
        } else if (map->bool_barre == 3 && map->bool_r->line == 0) {
            map->bool_r->line = 1;
            sfRectangleShape_setFillColor(map->btn_r->tab[DISP_LINE]->rec,
                (sfColor){0, 255, 40, 255});
        }
        play_sound(map);
    }
    disp_point(window, coord, map);
    disp_light_cube_texture(window, coord, map);
}
