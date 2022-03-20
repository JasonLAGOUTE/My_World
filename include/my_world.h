/*
** EPITECH PROJECT, 2022
** MY_WORLD.h
** File description:
** MY_WORLD
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <SFML/Audio.h>
#include <SFML/System/Time.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#include "enum.h"

#ifndef MY_WORLD_H
    #define MY_WORLD_H
    #define MAP_X 20
    #define MAP_Y 20
    #define WIDTH 1920
    #define LENGTH 1080
    #define PI 3.14159265358979323846

typedef struct perlin {
    float tmp;
    float s;
    float t;
    float u;
    float v;
    float Cx;
    float Cy;
    float Li1;
    float Li2;
    int gi0;
    int gi1;
    int gi2;
    int gi3;
} perlin_t;

typedef struct {
    sfColor first;
    sfColor second;
    sfColor third;
    sfColor four;
    sfColor five;
    sfColor six;
} color_t;

typedef struct {
    sfTexture *texture;
    sfRectangleShape *rec;
    sfText *text;
    sfVector2f coord;
    sfVector2f size;
} button_t;

typedef struct {
    int width;
    int height;
    sfRenderWindow *wd;
    sfVideoMode mode;
    bool menu;
    bool settings;
} window_t;

typedef struct {
    int zoom;
    sfVector2i offset;
    sfVector2i angle;
    int edit_strenght;
    int radius;
} camera_t;

typedef struct {
    size_t width;
    size_t height;
} framebuffer_t;

typedef struct {
    sfTexture *texture;
    sfSprite *sprite;
} image_t;

typedef struct {
    sfTexture *texture;
    sfSprite *sprite;
    image_t *settings;
} menu_t;

typedef struct {
    sfRenderStates *state;
} textures_t;

typedef struct {
    textures_t **tab;
} all_textures_t;

typedef struct {
    button_t **tab;
} all_buttons_t;

typedef struct {
    int line;
    int point;
    int texture;
    int cube;
    int light;
} bool_render_t;

typedef struct {
    int radius;
    int reset;
    int ran_gen;
    int edit_strenght;
} bool_edit_t;

typedef struct {
    sfVector2f points;
    sfVector2f points2;
    sfVector2f points3;
    sfVector2f points4;
    sfVector3f points3d;
} point_t;

typedef struct {
    sfMusic *music;
    bool on;
} music_t;

typedef struct {
    sfSoundBuffer *buffer;
    sfSound *sound;
    bool on;
} sound_t;

typedef struct {
    int **map;
    int **texture_map;
    int last_time;
    int counter;
    sfClock *actual_time;
    int **water_map;
    point_t *point;
    camera_t cam;
    int actual;
    int is_editing;
    int bool_barre;
    all_textures_t *texture;
    all_buttons_t *btn;
    all_buttons_t *btn_t;
    all_buttons_t *btn_r;
    all_buttons_t *btn_e;
    bool_render_t *bool_r;
    music_t *music;
    sound_t *sound;
    bool_edit_t *bool_e;
    color_t colors;
} map_t;

window_t *window_unit(void);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
void draw_world(window_t *window, map_t *map);
void third_part_cube(sfRenderWindow *window, map_t *map);
float degrees_to_radiant(int degrees);
void even(sfEvent event, window_t *window, map_t *map);
void keyboard_control(sfEvent event, map_t *map, window_t *window);
sfVector2f to2d(sfVector3f p, map_t *map);
map_t *create_struct_map(camera_t camera);
framebuffer_t *framebuffer_create(size_t width, size_t height);
int display_menu(window_t *window, menu_t *menu);
int display_settings(window_t *window, image_t *set);
void verif_box(sfEvent event, window_t *window,
    sfMouseButtonEvent coord, map_t *map);
image_t *init_struct_map(void);
menu_t *init_struct_menu(void);
image_t *init_struct_settings(void);
void edit_map(map_t *map, sfEvent event);
void set_texture(image_t *font_map, menu_t *menu);
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
void zero_map(map_t *map);
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
int button_in_menu(window_t *window, sfMouseButtonEvent coord, map_t *map);
all_buttons_t *init_struct_buttons_edit(void);
void draw_edit(map_t *map, sfRenderWindow *wind);
void button_edit(window_t *window, sfMouseButtonEvent coord, map_t *map);
button_t *crt_btn_t(char *filename, char *text, int x, int y);
all_buttons_t *init_struct_buttons_rander(void);
void button_rander(window_t *window, sfMouseButtonEvent coord, map_t *map);
void draw_render(map_t *m, sfRenderWindow *w);
sfColor water_get_left_color(map_t *map, int i, int j);
sfColor water_get_right_color(map_t *map, int i, int j);
void water_shuffle_map(map_t *map);
void smooth_water_map(map_t *map);
void draw_circle(sfRenderWindow *window, map_t *map);
void draw_line(sfRenderWindow *window ,map_t *map);
void button_rander_tool(window_t *window, sfMouseButtonEvent coord,
    map_t *map);
bool_render_t *init_struct_bool_render(void);
void draw_water(map_t *map, sfRenderWindow *window, int i, int j);
void button_edit_tool(window_t *window, sfMouseButtonEvent coord,
    map_t *map, sfEvent event);
bool_edit_t *init_struct_bool_edit(void);
point_t *create_struct_point(void);
void hover_texture(window_t *window, sfMouseMoveEvent co, map_t *map);
void first_water_cube(sfRenderWindow *window, map_t *map);
void second_water_cube(sfRenderWindow *window, map_t *map);
void hover_red_sand(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_white_sand(window_t *window, sfMouseMoveEvent co,
    map_t *map);
void hover_snow(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_dirt(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_dirt_broke(window_t *window, sfMouseMoveEvent co,
    map_t *map);
void hover_stone_1(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_stone_2(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_glace_1(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_glace_2(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_grass(window_t *window, sfMouseMoveEvent co, map_t *map);
void hover_mars_dirt(window_t *window, sfMouseMoveEvent co,
    map_t *map);
perlin_t *init_struct_perlin(void);
int random_manuel(void);
int button_in_setting(window_t *window, sfMouseButtonEvent coord, map_t *map);
music_t *init_music(void);
void play_sound(map_t *map);
sound_t *init_sound(void);
void destroy_all(map_t *map, window_t *window, menu_t *menu, image_t *font);
void free_buttons(map_t *map);
void free_texture(map_t *map);
sfVertexArray *to_fill_triangle(map_t *m, sfColor color);
void display_vertex(sfRenderWindow *window, sfVertexArray *triangle_1,
    sfVertexArray *triangle_2, sfRenderStates *states);
sfVertexArray *fill_tri_map(map_t *m, sfColor color,
    sfVector2f first, sfVector2f second);
color_t init_struct_colors(void);

#endif
