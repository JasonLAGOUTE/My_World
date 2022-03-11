/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

all_textures_t *init_struct_all_textures()
{
    all_textures_t *all_textures = malloc(sizeof(all_textures_t));

    all_textures->textures_tab = malloc(sizeof(textures_t *) * LAST);
    all_textures->textures_tab[RED_SAND] = init_struct_texture("img/red_sand.png");
    all_textures->textures_tab[WHITE_SAND] = init_struct_texture("img/sand.png");
    all_textures->textures_tab[DIRT] = init_struct_texture("img/dirte.png");
    all_textures->textures_tab[DIRT_BROKE] = init_struct_texture("img/Dirt_broke.png");
    all_textures->textures_tab[GRASS] = init_struct_texture("img/grass.png");
    all_textures->textures_tab[SNOW] = init_struct_texture("img/Snow.png");
    all_textures->textures_tab[STONE2] = init_struct_texture("img/stone_2.png");
    all_textures->textures_tab[STONE] = init_struct_texture("img/stone.png");
    all_textures->textures_tab[WATER1] = init_struct_texture("img/water_1.png");
    all_textures->textures_tab[WATER2] = init_struct_texture("img/water_2.png");
    all_textures->textures_tab[MARS_DIRT] = init_struct_texture("img/mars_dirt.png");
    return all_textures;
}
