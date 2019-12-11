/*
** EPITECH PROJECT, 2019
** run_event
** File description:
** run_event
*/

#include "include/frambuffer.h"
#include "include/my.h"

void analyse_events(sfRenderWindow *window, sfEvent event,
                    link_t *link, ui_t *ui_struct)
{
    switch (event.type) {
    case sfEvtKeyReleased:
        manage_key_space(event.key, link, ui_struct);
        break;
    case sfEvtMouseButtonPressed:
        manage_mouse_click_start(event.mouseButton, ui_struct);
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
    if (event.code == sfKeySpace)
        manage_key_space(event, link, ui_struct);
}

void manage_key_space(sfKeyEvent event, link_t *link,
                    ui_t *ui_struct)
{
    if (link->gravity == 0)
        link->is_jump = 1;
}

void manage_mouse_click_start(sfMouseButtonEvent event, ui_t *ui_struct)
{
    if (event.button == sfMouseLeft) {
        if (event.x <= 1000 && event.x >= 900 &&
        event.y <= 700 && event.y > 600)
            ui_struct->start_button_press = 1;
        if (event.x <= 1000 && event.x >= 900 &&
        event.y <= 850 && event.y > 750)
            ui_struct->quit = 1;
    }
}