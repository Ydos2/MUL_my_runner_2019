/*
** EPITECH PROJECT, 2019
** gravity
** File description:
** gravity
*/

#include "frambuffer.h"
#include "my.h"

void initialise_gravity(link_t *link, map_t *map_struct, ui_t *ui_struct)
{
    int actu_tile = 0;
    int gravity_actu = 1;

    get_link_pos(link);
    for (int i = 0; i != 8; i++) {
        if (link->y_pos == 9 || link->y_pos == actu_tile-1)
            ui_struct->lose = 1;
        if (link->float_jump == 1)
            break;
        actu_tile = set_actu_tile(i, map_struct);
        if (link->y_pos == actu_tile-2) {
            gravity_actu = 0;
            break;
        }
    }
    if (gravity_actu == 1)
        link->gravity = 1;
    else
        link->gravity = 0;
}

void get_link_pos(link_t *link)
{
    int i = 0;

    for (; link->position_link.y == 0; link->y_pos = 0, i = 1);
    for (; link->position_link.y == 128 && i == 0; link->y_pos = 1, i = 1);
    for (; link->position_link.y == 256 && i == 0; link->y_pos = 2, i = 1);
    for (; link->position_link.y == 384 && i == 0; link->y_pos = 3, i = 1);
    for (; link->position_link.y == 512 && i == 0; link->y_pos = 4, i = 1);
    for (; link->position_link.y == 640 && i == 0; link->y_pos = 5, i = 1);
    for (; link->position_link.y == 768 && i == 0; link->y_pos = 6, i = 1);
    for (; link->position_link.y == 896 && i == 0; link->y_pos = 7, i = 1);
    for (; link->position_link.y == 1024 && i == 0; link->y_pos = 8, i = 1);
    for (; link->position_link.y >= 1152 && i == 0; link->y_pos = 9, i = 1);
    if (i == 0)
        link->float_jump = 1;
    else
        link->float_jump = 0;
}

int set_actu_tile(int i, map_t *map_struct)
{
    if (map_struct->line_1 == 1 && i == 0)
        return (1);
    if (map_struct->line_2 == 1 && i == 1)
        return (2);
    if (map_struct->line_3 == 1 && i == 2)
        return (3);
    if (map_struct->line_4 == 1 && i == 3)
        return (4);
    if (map_struct->line_5 == 1 && i == 4)
        return (5);
    if (map_struct->line_6 == 1 && i == 5)
        return (6);
    if (map_struct->line_7 == 1 && i == 6)
        return (7);
    if (map_struct->line_8 == 1 && i == 7)
        return (8);
    return (0);
}

void apply_gravity(link_t *link)
{
    link->is_fall = 0;
    if (link->gravity == 1) {
        link->position_link.y += 16;
        if (link->is_jump == 0)
            link->is_fall = 1;
    }
}