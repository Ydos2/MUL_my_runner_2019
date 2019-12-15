/*
** EPITECH PROJECT, 2019
** initalise_tile
** File description:
** initialise_tile
*/

#include "frambuffer.h"
#include "my.h"

void init_tile_y(map_t *map_struct)
{
    map_struct->line_1 = 0;
    map_struct->line_2 = 0;
    map_struct->line_3 = 0;
    map_struct->line_4 = 0;
    map_struct->line_5 = 0;
    map_struct->line_6 = 0;
    map_struct->line_7 = 0;
    map_struct->line_8 = 0;
}

void update_tile_y(map_t *map_struct, ui_t *ui, int nbr_of_obj)
{
    if (ui->x_pos >= 0 && ui->x_pos < 129) {
        if (map_struct->y_tile == 1)
            map_struct->line_1 = 1;
        if (map_struct->y_tile == 2)
            map_struct->line_2 = 1;
        if (map_struct->y_tile == 3)
            map_struct->line_3 = 1;
        if (map_struct->y_tile == 4)
            map_struct->line_4 = 1;
        if (map_struct->y_tile == 5)
            map_struct->line_5 = 1;
        if (map_struct->y_tile == 6)
            map_struct->line_6 = 1;
        if (map_struct->y_tile == 7)
            map_struct->line_7 = 1;
        if (map_struct->y_tile == 8)
            map_struct->line_8 = 1;
        if (nbr_of_obj == 6)
            ui->obj_actu = 6;
        if (nbr_of_obj == 7)
            ui->win = 1;
        else
            ui->win = 0;
    }
}