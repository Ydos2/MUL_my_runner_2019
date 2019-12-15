/*
** EPITECH PROJECT, 2019
** run_event
** File description:
** run_event
*/

#include "frambuffer.h"
#include "my.h"

void analyse_events(sfRenderWindow *window, sfEvent event,
                    link_t *link, ui_t *ui_struct)
{
    switch (event.type) {
    case sfEvtKeyPressed:
        manage_key_click_start(event.key, link, ui_struct);
        break;
    case sfEvtMouseButtonPressed:
        if (ui_struct->menu != 4)
            manage_mouse_click_start(event.mouseButton, ui_struct);
        else
            manage_mouse_click_skin(event.mouseButton, link, ui_struct);
        break;
    case sfEvtClosed:
        sfRenderWindow_close(window);
        break;
    default:
        break;
    }
}

void manage_key_click_start(sfKeyEvent event,
                    link_t *link, ui_t *ui_struct)
{
    if (event.code == 57)
        manage_key_space(link, ui_struct);
}

void manage_key_space(link_t *link, ui_t *ui_struct)
{
    if (link->gravity == 0) {
        link->is_jump = 1;
        sound_jump(ui_struct);
    }
}

void manage_mouse_click_start(sfMouseButtonEvent event, ui_t *ui_struct)
{
    if (event.button == sfMouseLeft) {
        if (event.x <= 1000 && event.x >= 900 &&
        event.y <= 650 && event.y > 550)
            ui_struct->start_button_press = 1;
        if (event.x <= 1000 && event.x >= 900 &&
        event.y <= 950 && event.y > 850)
            ui_struct->quit = 1;
        if (event.x <= 1250 && event.x >= 800 &&
        event.y <= 800 && event.y > 700)
            ui_struct->menu = 4;
    }
}

void manage_mouse_click_skin(sfMouseButtonEvent event, link_t *link, ui_t *ui)
{
    if (event.button == sfMouseLeft) {
        if (event.x <= 200 && event.x >= 100 &&
        event.y <= 600 && event.y > 500)
            link->skin = 0;
        if (event.x <= 400 && event.x >= 300 &&
        event.y <= 600 && event.y > 500)
            link->skin = 1;
        if (event.x <= 600 && event.x >= 500 &&
        event.y <= 600 && event.y > 500)
            link->skin = 2;
        if (event.x <= 800 && event.x >= 700 &&
        event.y <= 600 && event.y > 500)
            link->skin = 3;
        if (event.x <= 1000 && event.x >= 900 &&
        event.y <= 600 && event.y > 500)
            link->skin = 4;
        if (event.x <= 950 && event.x >= 750 &&
        event.y <= 850 && event.y > 750)
            ui->menu = 1;
    }
}