/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void play_sound(map_t *map)
{
    if (map->sound->on == false)
        sfSound_play(map->sound->sound);
}

sound_t *init_sound(void)
{
    sound_t *sound = malloc(sizeof(sound_t));

    sound->buffer = sfSoundBuffer_createFromFile("music/click_2.wav");
    sound->sound = sfSound_create();
    sfSound_setBuffer(sound->sound, sound->buffer);
    sound->on = true;
    return sound;
}
