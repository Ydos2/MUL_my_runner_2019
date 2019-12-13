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
    if (ui_struct->menu == 0)
        sfRenderWindow_setMouseCursorVisible(ui_struct->window, sfFalse);
    else
        sfRenderWindow_setMouseCursorVisible(ui_struct->window, sfTrue);
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
    ui_struct->quit = 0;
    ui_struct->menu = 1;
    ui_struct->win = 0;
    ui_struct->play_sound = 1;
    initialise_var(ui_struct, link);
    sfRenderWindow_setFramerateLimit(ui_struct->window, 30);
}

void initialise_var(ui_t *ui_struct, link_t *link)
{
    ui_struct->pos_background_down.x = 0;
    ui_struct->pos_background_down.y = 0;
    ui_struct->move_pos = 0;
    link->offset = 0;
    link->position_link.x = 100;
    link->position_link.y = 768;
    link->is_jump = 0;
    link->is_jump_actu = 0;
    ui_struct->score = 0;
    ui_struct->start_button_press = 0;
    ui_struct->pos_background_up.x = 0;
    ui_struct->win = 0;
    sound_start(ui_struct);
}