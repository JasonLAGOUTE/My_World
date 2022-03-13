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
#include <time.h>

#ifndef MY_WORLD_
    #define MY_WORLD_
    #define MAP_X 10
    #define MAP_Y 10
    #define WIDTH 1920
    #define LENGTH 1080
    #define PI 3.14159265358979323846

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
    SIZE_MAP,
    RANDOM_GEN,
    SIZE_RAND,
    FORCE_EDIT,
    LAST_EDIT
};

enum render {
    DISPLAY_LST,
    DISPLAY_POINT,
    DISPLAY_TEXTURE,
    DISPLAY_CUBE,
    DISPLAY_LIGHT,
    LAST_RENDER
};

typedef struct button {
    sfTexture *texture;
    sfRectangleShape *rec;
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
    textures_t **tab;
} all_textures_t;

typedef struct all_buttons {
    button_t **tab;
} all_buttons_t;

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
    int is_editing;
    int bool_barre;
    all_textures_t *texture;
    all_buttons_t *btn_t;
    all_buttons_t *btn;
    all_buttons_t *btn_e;
} map_t;

window_t *window_unit(void);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
void draw_world(sfRenderWindow *window, map_t *map);
void update_map(map_t *map);
float degrees_to_radiant(int degrees);
void even(sfEvent event, window_t *window, map_t *map);
void keyboard_control(sfEvent event, map_t *map, window_t *window);
sfVector2f to2d(sfVector3f p, map_t *map);
map_t *create_struct_map(camera_t camera);
framebuffer_t *framebuffer_create(size_t width, size_t height);
int display_menu(window_t *window, menu_t *menu);
void verif_box(window_t *window, sfMouseButtonEvent coord, map_t *map);
font_map_t *init_struct_map(void);
menu_t *init_struct_menu(void);
void edit_map(map_t *map, sfEvent event);
void set_texture(font_map_t *font_map, menu_t *menu);
textures_t *init_struct_texture(char *path);
sfVertexArray *crt_triangle_r(sfVector2f *point1, sfVector2f *point2,
    sfVector2f *point3, sfColor colors);
sfVertexArray *crt_triangle_l(sfVector2f *point1, sfVector2f *point2,
    sfVector2f *point3, sfColor colors);
camera_t init_struct_cam(camera_t *cam);
all_textures_t *init_struct_all_textures(void);
button_t *crt_btn(char *filename, char *text, int x, int y);
sfText *create_text(char *str, int char_size, sfVector2f coord,
    sfVector2f size);
button_t *set_button_texture(void);
void save_map(map_t *map);
void load_map(map_t *map);
all_buttons_t *init_struct_all_buttons(void);
void shuffle_map(map_t *map);
void smooth_map(map_t *map);
all_buttons_t *init_struct_buttons_navig(void);
int **create_map(int heigth, int width);
void reset_map(map_t *map);
void first_part_cube(sfRenderWindow *window, map_t *map);
void second_part_cube(sfRenderWindow *window, map_t *map);
void draw_navig_barre(map_t *map, sfRenderWindow *window);
void draw_button_paint(map_t *map, sfRenderWindow *window);
void draw_map(map_t *map, sfRenderWindow *window);
sfColor get_right_color(map_t *map, int i, int j);
sfColor get_left_color(map_t *map, int i, int j);
sfCircleShape *create_circle(float pos1, float pos2, float radius);
void mod_offset(sfEvent event,  map_t *map);
void mod_angle(sfEvent event,  map_t *map);
void mod_zoom(sfEvent event,  map_t *map);
void mod_radius(sfEvent event,  map_t *map);
void mod_save(sfEvent event,  map_t *map);
void mod_smooth(sfEvent event, map_t *map);
void mod_close(sfEvent event, window_t *window);
void mod_shuffle(sfEvent event, map_t *map);
void button_save(window_t *window, sfMouseButtonEvent coord, map_t *map);
void button_texture(window_t *window, sfMouseButtonEvent coord, map_t *map);
void button_back(window_t *window, sfMouseButtonEvent coord, map_t *map);
void button_paint(window_t *window, sfMouseButtonEvent coord, map_t *map);
void button_in_menu(window_t *window, sfMouseButtonEvent coord, map_t *map);
all_buttons_t *init_struct_buttons_edit(void);
void draw_edit(map_t *map, sfRenderWindow *wind);
void button_edit(window_t *window, sfMouseButtonEvent coord, map_t *map);
button_t *crt_btn_t(char *filename, char *text, int x, int y);

#endif
