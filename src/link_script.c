/*
** EPITECH PROJECT, 2019
** link_script
** File description:
** link_script
*/

#include "frambuffer.h"
#include "my.h"

void define_link(link_t *link, ui_t *ui_struct, map_t *map_struct)
{
    ui_struct->score++;
    if (ui_struct->seconds > 0.1 && ui_struct->lose != 1) {
        if (link->is_fall == 1)
            move_rect_link_fall(link);
        else if (link->is_jump == 0)
            move_rect_link(link);
        else
            move_rect_link_jump(link);
    } else if (ui_struct->seconds > 0.1 && ui_struct->lose == 1)
        move_rect_link_die(link, ui_struct);
    intance_jump(link);
    initialise_gravity(link, map_struct, ui_struct);
    apply_gravity(link);
    draw_link(ui_struct, link);
}

void draw_link(ui_t *ui, link_t *link)
{
    sfTexture* texture_link = NULL;
    sfSprite* sprite_link = NULL;
    sfVector2f scale;

    scale.x = 4;
    scale.y = 4;
    link->rect.width = 30;
    link->rect.height = 33;
    link->rect.top = link->top;
    link->rect.left = link->offset;
    texture_link = get_skin(link, texture_link);
    sprite_link = sfSprite_create();
    sfSprite_setTexture(sprite_link, texture_link, sfTrue);
    sfSprite_setScale(sprite_link, scale);
    sfSprite_setPosition(sprite_link, link->position_link);
    sfSprite_setTextureRect(sprite_link, link->rect);
    sfRenderWindow_drawSprite(ui->window, sprite_link, NULL);
}

void intance_jump(link_t *link)
{
    if (link->is_jump_actu == 0)
        link->is_jump_actu = 30;
    if (link->is_jump == 1 && link->is_jump_actu > 0 &&
            link->is_jump_actu <= 15) {
        link->position_link.x = 100;
        link->is_jump_actu -= 1;
    }
    if (link->is_jump == 1 && link->is_jump_actu > 15 &&
            link->is_jump_actu <= 30) {
        link->position_link.x = 100;
        link->position_link.y -= 32;
        link->is_jump_actu -= 1;
    }
    if (link->is_jump_actu == 0)
        link->is_jump = 0;
}

void set_lose(ui_t *ui_struct)
{
    ui_struct->menu = 2;
}

void set_win(ui_t *ui_struct)
{
    ui_struct->menu = 3;
}