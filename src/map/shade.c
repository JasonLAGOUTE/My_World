/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfColor get_right_color(map_t *map, int i, int j)
{
    if (map->map[i][j] > (map->map[i + 1][j + 1] + 1) * 2 &&
        map->map[i][j] > (map->map[i + 1][j] + 1) * 2) {
        return sfWhite;
    }
    if ((map->map[i][j] < map->map[i + 1][j]
        || map->map[i][j] > map->map[i + 1][j + 1])
        && map->map[i + 1][j] > map->map[i + 1][j + 1])
        return map->colors.first;
    if (map->map[i][j] < map->map[i + 1][j + 1])
        return map->colors.second;
    return map->colors.third;
}

sfColor get_left_color(map_t *map, int i, int j)
{
    if (map->map[i][j] < map->map[i + 1][j + 1]
        && map->map[i][j] < map->map[i][j + 1])
        return map->colors.second;
    if (map->map[i][j] > map->map[i + 1][j + 1]
        && map->map[i][j] > map->map[i][j + 1])
        return map->colors.first;
    if (map->map[i][j] > (map->map[i + 1][j + 1] + 1) * 2
        && map->map[i][j + 1] > (map->map[i + 1][j + 1] + 1) * 2)
        return sfWhite;
    if ((map->map[i][j] < map->map[i][j + 1]
        || map->map[i][j] > map->map[i + 1][j + 1])
        && map->map[i][j + 1] > map->map[i + 1][j + 1])
        return sfWhite;
    if (map->map[i][j] < map->map[i + 1][j + 1]
        || (map->map[i][j] > map->map[i][j + 1]
        && map->map[i][j] > map->map[i + 1][j + 1]))
        return map->colors.first;
    return map->colors.third;
}

sfColor water_get_right_color(map_t *map, int i, int j)
{
    if (map->water_map[i][j] > (map->water_map[i + 1][j + 1] + 1) * 2 &&
        map->water_map[i][j] > (map->water_map[i + 1][j] + 1) * 2) {
        return map->colors.six;
    }
    if ((map->water_map[i][j] < map->water_map[i + 1][j]
        || map->water_map[i][j] > map->water_map[i + 1][j + 1])
        && map->water_map[i + 1][j] > map->water_map[i + 1][j + 1])
        return map->colors.four;
    if (map->water_map[i][j] < map->water_map[i + 1][j + 1])
        return map->colors.five;
    return map->colors.six;
}

sfColor water_get_left_color(map_t *map, int i, int j)
{
    if (map->water_map[i][j] < map->water_map[i + 1][j + 1]
        && map->water_map[i][j] < map->water_map[i][j + 1])
        return map->colors.five;
    if (map->water_map[i][j] > map->water_map[i + 1][j + 1]
        && map->water_map[i][j] > map->water_map[i][j + 1])
        return map->colors.four;
    if (map->water_map[i][j] > (map->water_map[i + 1][j + 1] + 1) * 2
        && map->water_map[i][j + 1] > (map->water_map[i + 1][j + 1] + 1) * 2)
        return map->colors.six;
    if ((map->water_map[i][j] < map->water_map[i][j + 1]
        || map->water_map[i][j] > map->water_map[i + 1][j + 1])
        && map->water_map[i][j + 1] > map->water_map[i + 1][j + 1])
        return map->colors.six;
    if (map->water_map[i][j] < map->water_map[i + 1][j + 1]
        || (map->water_map[i][j] > map->water_map[i][j + 1]
        && map->water_map[i][j] > map->water_map[i + 1][j + 1]))
        return map->colors.four;
    return map->colors.six;
}
