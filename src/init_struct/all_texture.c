/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

all_textures_t *init_struct_all_textures()
{
    all_textures_t *all = malloc(sizeof(all_textures_t));

    all->tab = malloc(sizeof(textures_t *) * LAST);
    all->tab[RED_SAND] = init_struct_texture("assets/img/red_sand.png");
    all->tab[WHITE_SAND] = init_struct_texture("assets/img/sand.png");
    all->tab[DIRT] = init_struct_texture("assets/img/dirte.png");
    all->tab[DIRT_BROKE] = init_struct_texture("assets/img/Dirt_broke.png");
    all->tab[GRASS] = init_struct_texture("assets/img/grass.png");
    all->tab[SNOW] = init_struct_texture("assets/img/Snow.png");
    all->tab[STONE2] = init_struct_texture("assets/img/stone_2.png");
    all->tab[STONE] = init_struct_texture("assets/img/stone.png");
    all->tab[WATER1] = init_struct_texture("assets/img/water_1.png");
    all->tab[WATER2] = init_struct_texture("assets/img/water_2.png");
    all->tab[MARS_DIRT] = init_struct_texture("assets/img/mars_dirt.png");
    return all;
}
