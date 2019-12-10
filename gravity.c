/*
** EPITECH PROJECT, 2019
** gravity
** File description:
** gravity
*/

#include "include/frambuffer.h"
#include "include/my.h"

void initialise_gravity(link_t *link, map_t *map_struct)
{
    int actu_tile = 0;
    int gravity_actu = 1;

    get_link_pos(link);
    for (int i = 0; i != 8; i++) {
        actu_tile = set_actu_tile(i, map_struct);
        if (link->y_pos == actu_tile-2) {
            gravity_actu = 0;
            break;
        }
    }
    printf("link_pos : %d actu_tile = %d\n", link->y_pos, actu_tile-2);
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
}

void apply_gravity(link_t *link)
{
    if (link->gravity == 1)
        link->position_link.y += 16;
}