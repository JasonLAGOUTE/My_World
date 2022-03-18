/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

music_t *init_music(void)
{
    music_t *music = malloc(sizeof(music_t));

    music->music = sfMusic_createFromFile("music/music.ogg");
    sfMusic_setLoop(music->music, true);
    sfMusic_play(music->music);
    music->on = true;
    return music;
}
