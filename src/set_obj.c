/*
** EPITECH PROJECT, 2019
** set_obj
** File description:
** set_obj
*/

#include "frambuffer.h"
#include "my.h"

void create_object(int nbr_of_obj, obj_t *obj_struct, ui_t *ui,
    map_t *map_struct)
{
    if (ui->x_pos < -128 || ui->x_pos > 1920) {
    } else {
        obj_struct->rect_obj.width = 128;
        obj_struct->rect_obj.height = 128;
        obj_struct->rect_obj.top = 0;
        obj_struct->rect_obj.left = 0;
        obj_struct->pos_obj.x = ui->x_pos;
        obj_struct->pos_obj.y = ui->y_pos;
        create_obj_1(nbr_of_obj, obj_struct);
        obj_struct->sprite_obj = sfSprite_create();
        sfSprite_setTexture(obj_struct->sprite_obj, obj_struct->texture_obj,
            sfTrue);
        sfSprite_setTextureRect(obj_struct->sprite_obj, obj_struct->rect_obj);
        sfSprite_setPosition(obj_struct->sprite_obj, obj_struct->pos_obj);
        sfRenderWindow_drawSprite(ui->window, obj_struct->sprite_obj, NULL);
        obj_struct->next = malloc(sizeof(obj_t));
        ui->finich_move = 1;
    }
    update_tile_y(map_struct, ui, nbr_of_obj);
}

void create_obj_1(int nbr_of_obj, obj_t *obj_struct)
{
    if (nbr_of_obj == 1)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/ground.png", NULL);
    if (nbr_of_obj == 2)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/ground_left_edge.png", NULL);
    if (nbr_of_obj == 3)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/ground_right_edge.png", NULL);
    if (nbr_of_obj == 4)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/spike.png", NULL);
    if (nbr_of_obj == 5)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/landmine.png", NULL);
    if (nbr_of_obj == 6)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/blue_rubis.png", NULL);
    if (nbr_of_obj == 7)
        obj_struct->texture_obj = sfTexture_createFromFile(
                "./texture/chest.png", NULL);
}

void set_map(map_t *map_struct, ui_t *ui, obj_t *obj_struct)
{
    obj_struct = malloc(sizeof(obj_t));
    ui->pos_moins += 1;
    init_tile_y(map_struct);
    ui->finich_move = 0;
    for (int y = 0; y != 8; y++) {
        map_struct->y_tile++;
        ui->x_pos = 0 - ui->move_pos;
        for (int x = 0; map_struct->map[y][x] != '\0'; x++) {
            map_struct->x = x;
            map_struct->y = y;
            get_map(map_struct, ui, obj_struct);
        }
    }
    obj_struct = NULL;
    map_struct->y_tile = 0;
    if (ui->lose_move == 0)
        ui->move_pos = ui->move_pos + 12;
    else
        sound_die(ui);
    ui->y_pos = 0;
}

void get_map(map_t *map_struct, ui_t *ui, obj_t *obj_struct)
{
    if (map_struct->map[map_struct->y][map_struct->x] == '1')
        create_object(1, obj_struct, ui, map_struct);
    if (map_struct->map[map_struct->y][map_struct->x] == '2')
        create_object(2, obj_struct, ui, map_struct);
    if (map_struct->map[map_struct->y][map_struct->x] == '3')
        create_object(3, obj_struct, ui, map_struct);
    if (map_struct->map[map_struct->y][map_struct->x] == '4')
        create_object(4, obj_struct, ui, map_struct);
    if (map_struct->map[map_struct->y][map_struct->x] == '5')
        create_object(5, obj_struct, ui, map_struct);
    if (map_struct->map[map_struct->y][map_struct->x] == '6')
        create_object(6, obj_struct, ui, map_struct);
    if (map_struct->map[map_struct->y][map_struct->x] == '7')
        create_object(7, obj_struct, ui, map_struct);
    ui->x_pos += 128;
    if (map_struct->map[map_struct->y][map_struct->x] == '\n') {
        ui->x_pos = 0;
        ui->y_pos += 128;
    }
}