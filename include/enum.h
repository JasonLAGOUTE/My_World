/*
** EPITECH PROJECT, 2022
** MY_WORLD.h
** File description:
** MY_WORLD
*/

#ifndef ENUM_H
    #define ENUM_H

enum paint {
    RED_SAND,
    WHITE_SAND,
    DIRT,
    DIRT_BROKE,
    GRASS,
    MARS_DIRT,
    SNOW,
    STONE2,
    STONE,
    WATER1,
    WATER2,
    WATER3,
    LAST
};

enum barre_navig {
    MENU,
    EDIT,
    SAVE,
    PAINT,
    RENDER,
    LAST_BARRE
};

enum edit {
    RADIUS_EDIT,
    RESET_MAP,
    RANDOM_GEN,
    FORCE_EDIT,
    LAST_EDIT
};

enum render {
    DISP_LINE,
    DISP_POINT,
    DISP_TXT,
    DISP_CUBE,
    DISP_LIGHT,
    LAST_RANDER
};

#endif
