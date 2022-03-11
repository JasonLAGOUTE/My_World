/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

all_buttons_t *init_struct_all_buttons(void)
{
    all_buttons_t *all = malloc(sizeof(all_buttons_t));

    all->tab_textures = malloc(sizeof(all_buttons_t *) * LAST);
    all->tab_textures[RED_SAND] = create_button("img/7.png", "Red Sand", 1720, -40);
    all->tab_textures[WHITE_SAND] = create_button("img/7.png", "White Sand", 1720, 40);
    all->tab_textures[DIRT] = create_button("img/7.png", "Dirt", 1720, 120);
    all->tab_textures[DIRT_BROKE] = create_button("img/7.png", "Dirt_broke", 1720, 200);
    all->tab_textures[GRASS] = create_button("img/7.png", "Grass", 1720, 280);
    all->tab_textures[MARS_DIRT] = create_button("img/7.png", "Mars dirt", 1720, 360);
    all->tab_textures[SNOW] = create_button("img/7.png", "Snow", 1720, 440);
    all->tab_textures[STONE2] = create_button("img/7.png", "First stone", 1720, 520);
    all->tab_textures[STONE] = create_button("img/7.png", "Second stone", 1720, 600);
    all->tab_textures[WATER1] = create_button("img/7.png", "First Water", 1720, 680);
    all->tab_textures[WATER2] = create_button("img/7.png", "Secone Water", 1720, 760);
    all->tab_textures[MENU] = create_button("img/7.png", "Menu", 500, 500);
    all->tab_textures[EDIT] = create_button("img/7.png", "Edit", 1720, 760);
    all->tab_textures[SAVE] = create_button("img/7.png", "Save", 1720, 760);
    all->tab_textures[PAINT] = create_button("img/7.png", "Paint", 1720, 760);
    return all;
}

