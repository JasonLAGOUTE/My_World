/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int button_in_setting(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    // sfSoundBuffer *soundbuffer = sfSoundBuffer_createFromFile("");
    // sfSound *sound = sfSound_create();
    // sfSound_setBuffer(sound, soundbuffer);
    // sfSound_play(sound);

    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 125 && coord.y <= 255)) && window->menu == false
        && window->settings == true)
        my_printf("sound");
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 288 && coord.y <= 414)) && window->menu == false
        && window->settings == true) {
        if (map->music->on == true) {
            sfMusic_pause(map->music->music);
            map->music->on = false;
        } else {
            sfMusic_play(map->music->music);
            map->music->on = true;
        }
    }
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 447 && coord.y <= 573)) && window->menu == false
        && window->settings == true) {
        window->menu = true;
        window->settings = false;
        return 1;
    }
    return 0;
}
