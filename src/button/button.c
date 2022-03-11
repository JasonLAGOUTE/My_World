/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static sfRectangleShape *create_rect(sfVector2f position, sfVector2f size, 
    sfTexture *texture)
{
    sfRectangleShape *rect = sfRectangleShape_create();

    sfRectangleShape_setPosition(rect, position);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setTexture(rect, texture, true);
    return rect;
}

button_t *create_button(char *filename, char *text, int x, int y)
{
    button_t *button = malloc(sizeof(button_t));
    int char_size = 15;

    button->coord = (sfVector2f){x, y};
    button->size = (sfVector2f){200, 200};
    button->texture = sfTexture_createFromFile(filename, NULL);
    button->rect = create_rect(button->coord, button->size, button->texture);
    button->text = create_text(text, char_size, button->coord, button->size);
    return button;
}
