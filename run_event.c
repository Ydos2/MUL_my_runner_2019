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
    link->is_jump = 1;
}