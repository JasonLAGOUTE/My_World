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

window_t *window_unit(void);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
void draw_map(sfRenderWindow *window, camera_t cam);
float degrees_to_radiant(int degrees);
void even(sfEvent event, window_t *window);
void keyboard_control(sfEvent event, camera_t *cam);
sfVector2f to2d(sfVector3f p, camera_t cam);
map_t *create_struct_map(camera_t camera);

#endif
