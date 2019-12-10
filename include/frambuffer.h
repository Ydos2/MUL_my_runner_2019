/*
** EPITECH PROJECT, 2019
** frambuffer_h
** File description:
** frambuffer
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Window/Export.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/Graphics/FontInfo.h>
#include <SFML/Graphics/Glyph.h>
#include <SFML/Graphics/Types.h>
#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

typedef struct obj {
    sfSprite* sprite_obj;
    sfTexture* texture_obj;
    sfVector2f pos_obj;
    sfIntRect rect_obj;
    struct obj * next;
} obj_t;

typedef struct map {
    char **map;
    int j;
    int i;
    int k;
    int fd;
    char car;
    int x;
    int y;
    int y_tile;
    int line_1;
    int line_2;
    int line_3;
    int line_4;
    int line_5;
    int line_6;
    int line_7;
    int line_8;
} map_t;

typedef struct link {
    int health;
    int offset;
    int top;
    int is_death;
    int is_jump;
    int is_jump_actu;
    int y_pos;
    int gravity;
    sfIntRect rect;
    sfVector2f position_link;
} link_t;

typedef struct ui {
    int sound_die;
    int score;
    float seconds;
    int x_pos;
    int y_pos;
    int move_pos;
    int pos_moins;
    int y_pos_player;
    sfVector2f pos_background_up;
    sfVector2f pos_background_midle;
    sfVector2f pos_background_down;
    sfSprite* sprite;
    sfTexture* texture;
    sfTime time;
    sfClock *clock;
    sfMusic *music_sound;
    sfRenderWindow* window;
} ui_t;

void extend_window_open(sfRenderWindow *window, ui_t *ui_struct, sfEvent event);
int draw_help(int ac, char **av);

void music_game(ui_t *ui_struct);

void analyse_events(sfRenderWindow *window, sfEvent event,
                    link_t *link, ui_t *ui_struct);
void manage_key_space(sfKeyEvent event, link_t *link,
                    ui_t *ui_struct);
void manage_key_click_start(sfKeyEvent event,
                    link_t *link, ui_t *ui_struct);

void main_extend_1(ui_t *ui_struct);
void main_extend_2(ui_t *ui_struct, link_t *link);

void initialise_map(char **argv, map_t *map_struct);
void start_map(char **argv, map_t *map_struct);

void create_clock_func(ui_t *ui_struct);
void destroy_obj1(ui_t *ui, map_t *map_struct, link_t *link, obj_t *obj);

void define_link(link_t *link, ui_t *ui_struct, map_t *map_struct);
void draw_link(ui_t *ui, link_t *link);
void intance_jump(link_t *link);

void draw_background_up(ui_t *ui);
void draw_background_midle(ui_t *ui);
void draw_background_down(ui_t *ui);

void move_rect_link(link_t *link);
void move_rect_link_jump(link_t *link);
void move_rect_link_die(link_t *link);

void set_map(map_t *map_struct, ui_t *ui, obj_t *obj_struct);
char *my_strdupp(char const *src);
int my_strlenn(char const *str);
char *my_strcpyy(char *dest, char const *src);

void create_object(int nbr_of_obj, obj_t *obj_struct, ui_t *ui,
    map_t *map_struct);
void create_obj_1(int nbr_of_obj, obj_t *obj_struct);
void get_map(map_t *map_struct, ui_t *ui, obj_t *obj_struct);

void init_tile_y(map_t *map_struct);
void update_tile_y(map_t *map_struct, ui_t *ui);

void initialise_gravity(link_t *link, map_t *map_struct);
void get_link_pos(link_t *link);
int set_actu_tile(int i, map_t *map_struct);
void apply_gravity(link_t *link);
#endif /*FRAMBUFFER_H_ */