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

    all->tab = malloc(sizeof(all_buttons_t *) * LAST);
    all->tab[RED_SAND] = crt_btn("assets/img/7.png", "Red Sand", 1720, -40);
    all->tab[WHITE_SAND] = crt_btn("assets/img/7.png", "White Sand", 1720, 40);
    all->tab[DIRT] = crt_btn("assets/img/7.png", "Dirt", 1720, 120);
    all->tab[DIRT_BROKE] = crt_btn("assets/img/7.png", "Dirt_broke", 1720, 200);
    all->tab[GRASS] = crt_btn("assets/img/7.png", "Grass", 1720, 280);
    all->tab[MARS_DIRT] = crt_btn("assets/img/7.png", "Mars dirt", 1720, 360);
    all->tab[SNOW] = crt_btn("assets/img/7.png", "Snow", 1720, 440);
    all->tab[STONE2] = crt_btn("assets/img/7.png", "First stone", 1720, 520);
    all->tab[STONE] = crt_btn("assets/img/7.png", "Second stone", 1720, 600);
    all->tab[WATER1] = crt_btn("assets/img/7.png", "First Water", 1720, 680);
    all->tab[WATER2] = crt_btn("assets/img/7.png", "Secone Water", 1720, 760);
    return all;
}

all_buttons_t *init_struct_buttons_edit(void)
{
    all_buttons_t *all = malloc(sizeof(all_buttons_t));

    all->tab = malloc(sizeof(all_buttons_t *) * LAST_BARRE);
    all->tab[MENU] = crt_btn("assets/img/6.png", "Menu", 0, -50);
    all->tab[EDIT] = crt_btn("assets/img/6.png", "Edit", 360, -50);
    all->tab[SAVE] = crt_btn("assets/img/6.png", "Save", 180, -50);
    all->tab[PAINT] = crt_btn("assets/img/6.png", "Paint", 540, -50);
    all->tab[RENDER] = crt_btn("assets/img/6.png", "Render", 720, -50);
    return all;
}
