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

enum texture {
    RED_SAND,
    WHITE_SAND,
    LAST
};

typedef struct button {
    sfTexture *texture;
    sfRectangleShape *rect;
    sfText *text;
    sfVector2f coord;
    sfVector2f size;
} button_t;

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
    int edit_strenght;
    int radius;
} camera_t;

typedef struct framebuffer {
    size_t width;
    size_t height;
} framebuffer_t;

typedef struct font_map {
    sfTexture *texture;
    sfSprite *sprite;
} font_map_t;

typedef struct menu {
    sfTexture *texture;
    sfSprite *sprite;
} menu_t;

typedef struct textures {
    sfRenderStates *state;
} textures_t;

typedef struct all_textures {
    textures_t **textures_tab;
} all_textures_t;

typedef struct map {
    int **map;
    int **texture_map;
    sfVector2f points;
    sfVector2f points2;
    sfVector2f points3;
    sfVector2f points4;
    sfVector3f points3d;
    camera_t cam;
    int actual;
    all_textures_t *texture;
    button_t *button;
} map_t;

window_t *window_unit(void);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
void draw_map(sfRenderWindow *window, camera_t cam, map_t *map);
void update_map(camera_t camera, map_t *map);
float degrees_to_radiant(int degrees);
void even(sfEvent event, window_t *window, map_t *map, camera_t cam);
void keyboard_control(sfEvent event, camera_t *cam,  map_t *map);
sfVector2f to2d(sfVector3f p, camera_t cam);
map_t *create_struct_map(camera_t camera);
framebuffer_t *framebuffer_create(size_t width, size_t height);
int display_menu(window_t *window, menu_t *menu);
void verif_box(window_t *window, sfMouseButtonEvent coord, map_t *map);
font_map_t *init_struct_map(void);
menu_t *init_struct_menu(void);
void edit_map(map_t *map, sfEvent event, camera_t cam);
void set_texture(font_map_t *font_map, menu_t *menu);
textures_t *init_struct_red_sand(void);
textures_t *init_struct_white_sand(void);
sfVertexArray *create_triangle_right(sfVector2f *point1, sfVector2f *point2, 
    sfVector2f *point3);
sfVertexArray *create_triangle_left(sfVector2f *point1, sfVector2f *point2, 
    sfVector2f *point3);
camera_t *init_struct_cam(void);
all_textures_t *init_struct_all_textures(void);
button_t *create_struct_buttons(char *filename, char *text);
sfText *create_text(char *str, int char_size, sfVector2f coord,
    sfVector2f size);
button_t *set_button_texture(void);
void save_map(map_t *map);
void load_map(map_t *map);
#endif
