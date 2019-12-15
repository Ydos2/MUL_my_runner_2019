/*
** EPITECH PROJECT, 2019
** background_draw
** File description:
** background_draw
*/

#include "frambuffer.h"
#include "my.h"

void draw_background_up(ui_t *ui)
{
    sfTexture* texture_background = NULL;
    sfSprite* sprite_background = NULL;
    sfVector2f scale;

    scale.x = 5.4;
    scale.y = 5.4;
    texture_background = sfTexture_createFromFile("./texture/far-buildings.png",
                            NULL);
    sprite_background = sfSprite_create();
    if (ui->pos_background_up.x <= -1380)
        ui->pos_background_up.x = 0;
    else
        ui->pos_background_up.x -= 1;
    sfSprite_setTexture(sprite_background, texture_background, sfTrue);
    sfSprite_setScale(sprite_background, scale);
    sfSprite_move(sprite_background, ui->pos_background_up);
    sfRenderWindow_drawSprite(ui->window, sprite_background, NULL);
}

void draw_background_midle(ui_t *ui)
{
    sfTexture* texture_background = NULL;
    sfSprite* sprite_background = NULL;
    sfVector2f scale;

    scale.x = 5.4;
    scale.y = 5.4;
    texture_background = sfTexture_createFromFile(
            "./texture/back-buildings.png", NULL);
    sprite_background = sfSprite_create();
    if (ui->pos_background_midle.x <= -1380)
        ui->pos_background_midle.x = 0;
    else
        ui->pos_background_midle.x -= 2;
    sfSprite_setTexture(sprite_background, texture_background, sfTrue);
    sfSprite_setScale(sprite_background, scale);
    sfSprite_move(sprite_background, ui->pos_background_midle);
    sfRenderWindow_drawSprite(ui->window, sprite_background, NULL);
}

void draw_background_down(ui_t *ui)
{
    sfTexture* texture_background = NULL;
    sfSprite* sprite_background = NULL;
    sfVector2f scale;

    scale.x = 5.5;
    scale.y = 5.5;
    texture_background = sfTexture_createFromFile(
            "./texture/foreground.png", NULL);
    sprite_background = sfSprite_create();
    if (ui->pos_background_down.x <= -1930)
        ui->pos_background_down.x = 0;
    else
        ui->pos_background_down.x -= 4;
    sfSprite_setTexture(sprite_background, texture_background, sfTrue);
    sfSprite_setScale(sprite_background, scale);
    sfSprite_move(sprite_background, ui->pos_background_down);
    sfRenderWindow_drawSprite(ui->window, sprite_background, NULL);
}