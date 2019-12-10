/*
** EPITECH PROJECT, 2019
** link_script
** File description:
** link_script
*/

#include "include/frambuffer.h"
#include "include/my.h"

void define_link(link_t *link, ui_t *ui_struct)
{
    if (ui_struct->seconds > 0.1) {
        if (link->is_jump == 0)
            move_rect_link(link);
        else
            move_rect_link_jump(link);
    }
    draw_link(ui_struct, link);
}

void draw_link(ui_t *ui, link_t *link)
{
    sfTexture* texture_link = NULL;
    sfSprite* sprite_link = NULL;
    sfVector2f scale;

    scale.x = 6;
    scale.y = 6;
    intance_jump(link);
    link->rect.width = 30;
    link->rect.height = 33;
    link->rect.top = link->top;
    link->rect.left = link->offset;
    texture_link = sfTexture_createFromFile("./texture/link_run.png",
                            NULL);
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
        link->position_link.y += 24;
        link->is_jump_actu -= 1;
    }
    if (link->is_jump == 1 && link->is_jump_actu > 15 &&
            link->is_jump_actu <= 30) {
        link->position_link.x = 100;
        link->position_link.y -= 24;
        link->is_jump_actu -= 1;
    }
    if (link->is_jump == 0) {
        link->position_link.x = 100;
        link->position_link.y = 706;
    }
    if (link->is_jump_actu == 0)
        link->is_jump = 0;
}