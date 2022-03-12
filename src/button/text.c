/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static sfVector2f to_tuple(sfVector2f pos, sfFloatRect other_pos)
{
    pos.x = other_pos.width / 2;
    pos.y = other_pos.height / 2;
    return pos;
}

sfText *create_text(char *str, int char_size, sfVector2f coo, sfVector2f size)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    sfVector2f origin_point = {0, 0};
    sfVector2f position_txt = {0, 0};
    sfFloatRect text_rect;

    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, char_size);
    sfText_setOutlineColor(text, sfBlack);
    sfText_setOutlineThickness(text, 2);
    text_rect = sfText_getGlobalBounds(text);
    origin_point = to_tuple(origin_point, text_rect);
    sfText_setOrigin(text, origin_point);
    position_txt.x = coo.x + size.x / 1.9;
    position_txt.y = coo.y + size.y / 2.0;
    sfText_setPosition(text, position_txt);
    return text;
}
