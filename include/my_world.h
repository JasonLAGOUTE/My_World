/*
** EPITECH PROJECT, 2022
** MY_WORLD.h
** File description:
** MY_WORLD
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#ifndef MY_WORLD_
    #define MY_WORLD_
    #define MAP_X 10
    #define MAP_Y 10
    #define WIDTH 1920
    #define LENGTH 1080
    #define PI 3.14159265358979323846

typedef struct window {
    int width;
    int height;
    sfRenderWindow *wd;
    sfVideoMode mode;
    bool menu;
} window_t;

typedef struct camera{
    int zoom;
    sfVector2i offset;
    sfVector2i angle;
} camera_t;

typedef struct map {
    int **map;
    sfVector2f points;
    sfVector2f points2;
    sfVector3f points3d;
    camera_t cam;
} map_t;

typedef struct framebuffer {
    size_t width;
    size_t height;
    sfTexture *texture;
    sfSprite *sprite;
} framebuffer_t;

window_t *window_unit(void);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
void draw_map(sfRenderWindow *window, camera_t cam,map_t *map);
void update_map(camera_t camera, map_t *map);
float degrees_to_radiant(int degrees);
void even(sfEvent event, window_t *window);
void keyboard_control(sfEvent event, camera_t *cam);
sfVector2f to2d(sfVector3f p, camera_t cam);
map_t *create_struct_map(camera_t camera);
framebuffer_t *framebuffer_create(size_t width, size_t height);
int display_menu(window_t *window, framebuffer_t *fb);
void verif_box(window_t *window, sfMouseButtonEvent coord);

#endif
