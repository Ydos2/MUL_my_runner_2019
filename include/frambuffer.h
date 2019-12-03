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

typedef struct link {
    int health;
    int offset;
    int top;
    int is_death;
    int is_jump;
    int is_jump_actu;
    sfIntRect rect;
    sfVector2f position_link;
} link_t;

typedef struct ui {
    int sound_die;
    int score;
    float seconds;
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

void create_clock_func(ui_t *ui_struct);
void destroy_obj1(ui_t *ui);

void define_link(link_t *link, ui_t *ui_struct);
void draw_link(ui_t *ui, link_t *link);
void intance_jump(link_t *link);

void draw_background_up(ui_t *ui);
void draw_background_midle(ui_t *ui);
void draw_background_down(ui_t *ui);

void move_rect_link(link_t *link);
void move_rect_link_jump(link_t *link);
void move_rect_link_die(link_t *link);
#endif /*FRAMBUFFER_H_ */