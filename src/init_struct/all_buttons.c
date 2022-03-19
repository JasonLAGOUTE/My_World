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
    all->tab[RED_SAND] = crt_btn_t("img/red_sand.png", "", 1740, 50);
    all->tab[WHITE_SAND] = crt_btn_t("img/sand.png", "", 1740, 125);
    all->tab[DIRT] = crt_btn_t("img/dirt.png", "", 1740, 200);
    all->tab[DIRT_BROKE] = crt_btn_t("img/dirt_broke.png", "", 1740, 275);
    all->tab[GRASS] = crt_btn_t("img/grass.png", "", 1740, 350);
    all->tab[MARS_DIRT] = crt_btn_t("img/mars_dirt.png", "", 1740, 425);
    all->tab[SNOW] = crt_btn_t("img/snow.png", "", 1740, 500);
    all->tab[STONE2] = crt_btn_t("img/stone_2.png", "", 1740, 575);
    all->tab[STONE] = crt_btn_t("img/stone.png", "", 1740, 650);
    all->tab[WATER1] = crt_btn_t("img/water_1.png", "", 1740, 725);
    all->tab[WATER2] = crt_btn_t("img/water_2.png", "", 1740, 800);
    return all;
}

all_buttons_t *init_struct_buttons_navig(void)
{
    all_buttons_t *all = malloc(sizeof(all_buttons_t));

    all->tab = malloc(sizeof(all_buttons_t *) * LAST_BARRE);
    all->tab[MENU] = crt_btn("img/b1.png", "Menu", 0, -50);
    all->tab[EDIT] = crt_btn("img/b1.png", "Edit", 360, -50);
    all->tab[SAVE] = crt_btn("img/b1.png", "Save", 180, -50);
    all->tab[PAINT] = crt_btn("img/b1.png", "Paint", 540, -50);
    all->tab[RENDER] = crt_btn("img/b1.png", "Render", 720, -50);
    return all;
}

all_buttons_t *init_struct_buttons_edit(void)
{
    all_buttons_t *all = malloc(sizeof(all_buttons_t));

    all->tab = malloc(sizeof(all_buttons_t *) * LAST_EDIT);
    all->tab[RADIUS_EDIT] = crt_btn("img/b2.png", "Radius Map", 1720, 40);
    all->tab[RESET_MAP] = crt_btn("img/b2.png", "Reset Map", 1720, 200);
    all->tab[RANDOM_GEN] = crt_btn("img/b2.png", "Random Gen", 1720, 360);
    all->tab[FORCE_EDIT] = crt_btn("img/b2.png", "Force Edit", 1720, 680);
    return all;
}

all_buttons_t *init_struct_buttons_rander(void)
{
    all_buttons_t *all = malloc(sizeof(all_buttons_t));

    all->tab = malloc(sizeof(all_buttons_t *) * LAST_RANDER);
    all->tab[DISP_LINE] = crt_btn("img/b2.png", "Display line", 1720, 40);
    all->tab[DISP_POINT] = crt_btn("img/b2.png", "Display point", 1720, 200);
    all->tab[DISP_TXT] = crt_btn("img/b2.png", "Display texture", 1720, 360);
    sfRectangleShape_setFillColor(all->tab[DISP_TXT]->rec,
        (sfColor){0, 255, 40, 255});
    all->tab[DISP_CUBE] = crt_btn("img/b2.png", "Display cube", 1720, 520);
    sfRectangleShape_setFillColor(all->tab[DISP_CUBE]->rec,
        (sfColor){0, 255, 40, 255});
    all->tab[DISP_LIGHT] = crt_btn("img/b2.png", "Display light", 1720, 680);
    sfRectangleShape_setFillColor(all->tab[DISP_LIGHT]->rec,
        (sfColor){0, 255, 40, 255});
    return all;
}
