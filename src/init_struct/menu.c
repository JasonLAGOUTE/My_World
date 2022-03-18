/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

menu_t *init_struct_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));

    menu->sprite = sfSprite_create();
    menu->texture = sfTexture_createFromFile("img/menu.jpg", NULL);
    menu->settings = init_struct_settings();
    return menu;
}

settings_t *init_struct_settings(void)
{
    settings_t *settings = malloc(sizeof(settings_t));

    settings->sprite = sfSprite_create();
    settings->texture = sfTexture_createFromFile("img/background.png", NULL);
    return settings;
}
