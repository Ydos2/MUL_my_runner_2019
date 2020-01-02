/*
** EPITECH PROJECT, 2019
** run_event
** File description:
** run_event
*/

#include "frambuffer.h"
#include "my.h"

void analyse_events(map_t *map_struct, sfEvent event,
                    link_t *link, ui_t *ui_struct)
{
    switch (event.type) {
    case sfEvtKeyPressed:
        manage_key_click_start(event.key, link, ui_struct);
        break;
    case sfEvtMouseButtonPressed:
        if (ui_struct->menu != 4 && ui_struct->menu != 5)
            manage_mouse_click_start(event.mouseButton, ui_struct);
        else if (ui_struct->menu == 4)
            manage_mouse_click_skin(event.mouseButton, link, ui_struct);
        else
            manage_mouse_click_lvl(event.mouseButton, link
                , ui_struct, map_struct);
        break;
    case sfEvtClosed:
        sfRenderWindow_close(ui_struct->window);
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
        event.y <= 600 && event.y > 500)
            ui_struct->start_button_press = 1;
        if (event.x <= 1000 && event.x >= 900 &&
        event.y <= 975 && event.y > 875)
            ui_struct->quit = 1;
        if (event.x <= 1225 && event.x >= 775 &&
        event.y <= 850 && event.y > 750)
            ui_struct->menu = 4;
        if (event.x <= 1225 && event.x >= 775 &&
        event.y <= 725 && event.y > 625)
            ui_struct->menu = 5;
    }
}

void manage_mouse_click_skin(sfMouseButtonEvent event, link_t *link, ui_t *ui)
{
    if (event.button == sfMouseLeft)
        set_action_event(event, link, ui);
    manage_mouse_click_skin_extend(event, ui);
}