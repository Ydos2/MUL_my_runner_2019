/*
** EPITECH PROJECT, 2019
** main_extend
** File description:
** main_extend
*/

#include "include/frambuffer.h"
#include "include/my.h"

void main_extend_1(ui_t *ui_struct)
{
    sfRenderWindow_clear(ui_struct->window, sfBlack);
    sfRenderWindow_setMouseCursorVisible(ui_struct->window, sfFalse);
    create_clock_func(ui_struct);
    draw_background_up(ui_struct);
    draw_background_midle(ui_struct);
    draw_background_down(ui_struct);
}

void main_extend_2(ui_t *ui_struct, link_t *link)
{
    sfVideoMode mode = {1920, 1080, 32};

    ui_struct->clock = sfClock_create();
    ui_struct->window = sfRenderWindow_create(
        mode, "Link RUN!", sfResize | sfClose, NULL);
    music_game(ui_struct);
    ui_struct->pos_background_down.x = 0;
    ui_struct->pos_background_down.y = 0;
    ui_struct->move_pos = 0;
    link->offset = 0;
    sfRenderWindow_setFramerateLimit(ui_struct->window, 30);
}