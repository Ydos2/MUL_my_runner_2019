/*
** EPITECH PROJECT, 2019
** link_anim
** File description:
** link_anim
*/

#include "include/frambuffer.h"
#include "include/my.h"

void move_rect_link(link_t *link)
{
    int i = 0;

    link->top = 0;
    if (link->offset == 134 && i == 0)
        link->offset = 0, i++;
    if (link->offset == 0 && i == 0)
        link->offset = 28, i++;
    if (link->offset == 28 && i == 0)
        link->offset = 56, i++;
    if (link->offset == 56 && i == 0)
        link->offset = 82, i++;
    if (link->offset == 82 && i == 0)
        link->offset = 108, i++;
    if (link->offset == 108 && i == 0)
        link->offset = 134;
}

void move_rect_link_jump(link_t *link)
{
    link->top = 34;
    if (link->is_jump_actu > 15 && link->is_jump_actu <= 30)
        link->offset = 0;
    if (link->is_jump_actu > 5 && link->is_jump_actu <= 15)
        link->offset = 32;
    if (link->is_jump_actu > 1 && link->is_jump_actu <= 5)
        link->offset = 56;
    if (link->is_jump_actu <= 1)
        link->offset = 0;
}

void move_rect_link_die(link_t *link)
{
    int i = 0;

    if (link->offset == 230 || link->offset == 345 && i == 0) {
        link->offset = 275;
        i++;
    }
    if (link->offset < 229 || link->offset > 424 && i == 0) {
        link->offset = 230;
        i++;
    }
    if (link->offset == 275 && i == 0) {
        link->offset = 296;
        i++;
    }
    if (link->offset == 296 && i == 0) {
        link->offset = 320;
        i++;
    }
    if (link->offset == 320 && i == 0)
        link->offset = 345;
}