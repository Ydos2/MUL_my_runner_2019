/*
** EPITECH PROJECT, 2019
** menu
** File description:
** menu
*/

#include "frambuffer.h"
#include "my.h"

void set_menu(ui_t *ui, link_t *link)
{
    if (ui->menu == 1)
        set_start_menu(ui, link);
    if (ui->menu == 2)
        set_lose_menu(ui, link);
    if (ui->menu == 3)
        set_win_menu(ui, link);
    if (ui->menu == 4)
        set_skin_menu(ui, link);
}

void set_lose_menu(ui_t *ui, link_t *link)
{
    if (ui->play_one == 0) {
        sound_die(ui);
        ui->play_one = 1;
    }
    draw_ui_gameover(ui->window);
    draw_button_play(ui->window);
    draw_button_skin(ui->window);
    draw_button_quit(ui->window);
    if (ui->start_button_press == 1) {
        initialise_var(ui, link);
        ui->play_one = 0;
        ui->menu = 0;
        ui->start_button_press = 0;
    }
}

void set_win_menu(ui_t *ui, link_t *link)
{
    if (ui->play_one == 0) {
        sound_win(ui);
        ui->play_one = 1;
    }
    draw_ui_win(ui->window);
    draw_button_play(ui->window);
    draw_button_skin(ui->window);
    draw_button_quit(ui->window);
    if (ui->start_button_press == 1) {
        initialise_var(ui, link);
        ui->play_one = 0;
        ui->menu = 0;
        ui->start_button_press = 0;
    }
}

void set_start_menu(ui_t *ui, link_t *link)
{
    draw_ui_start(ui->window);
    draw_button_play(ui->window);
    draw_button_skin(ui->window);
    draw_button_quit(ui->window);
    if (ui->start_button_press == 1) {
        initialise_var(ui, link);
        ui->play_one = 0;
        ui->menu = 0;
    }
}

void set_skin_menu(ui_t *ui, link_t *link)
{
    if (ui->play_one == 0) {
        sound_win(ui);
        ui->play_one = 1;
    }
    draw_ui_skin(ui->window);
    draw_ui_return(ui->window);
    draw_skin_1(ui);
    draw_skin_2(ui);
    draw_skin_3(ui);
    draw_skin_4(ui);
    draw_skin_5(ui);
    draw_select_skin(ui);
    if (ui->start_button_press == 1) {
        initialise_var(ui, link);
        ui->play_one = 0;
        ui->menu = 0;
        ui->start_button_press = 0;
    }
}