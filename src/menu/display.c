/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int display_menu(window_t *window, menu_t *menu)
{
    sfRenderWindow_drawSprite(window->wd, menu->sprite, NULL);
    sfRenderWindow_display(window->wd);
    return 0;
}


//    sfRenderStates status;

//FIRST BOX
//125 -- 125 Y ||| 815 -- 1790 X
//255 -- 255 Y ||| 815 -- 1790 X

//SECOND BOX
//214 -- 214 Y ||| 615 -- 1340 X
//308 -- 308 Y ||| 615 -- 1340 X

//THIRD BOX
//335 -- 335 Y ||| 615 -- 1340 X
//427 -- 427 Y ||| 615 -- 1340 X

//VOIR COORD WITH MOUSE
// printf("x >> %d\n", event.mouseButton.y);
// printf("y >> %d\n", event.mouseButton.x);