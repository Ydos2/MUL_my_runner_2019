/*
** EPITECH PROJECT, 2019
** draw_level
** File description:
** draw_level
*/

#include "frambuffer.h"
#include "my.h"

void draw_level_1(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;
    sfIntRect rect;

    scale.x = 2;
    scale.y = 2;
    pos_obj.x = 100;
    pos_obj.y = 500;
    rect.width = 75;
    rect.height = 75;
    rect.top = 0;
    rect.left = 5;
    texture_obj = sfTexture_createFromFile(
            "./texture/button.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfSprite_setTextureRect(sprite_obj, rect);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_level_2(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;
    sfIntRect rect;

    scale.x = 2;
    scale.y = 2;
    pos_obj.x = 300;
    pos_obj.y = 500;
    rect.width = 75;
    rect.height = 75;
    rect.top = 0;
    rect.left = 85;
    texture_obj = sfTexture_createFromFile(
            "./texture/button.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfSprite_setTextureRect(sprite_obj, rect);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_level_3(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;
    sfIntRect rect;

    scale.x = 2;
    scale.y = 2;
    pos_obj.x = 500;
    pos_obj.y = 500;
    rect.width = 75;
    rect.height = 75;
    rect.top = 0;
    rect.left = 160;
    texture_obj = sfTexture_createFromFile(
            "./texture/button.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfSprite_setTextureRect(sprite_obj, rect);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_level_4(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;
    sfIntRect rect;

    scale.x = 2;
    scale.y = 2;
    pos_obj.x = 700;
    pos_obj.y = 500;
    rect.width = 75;
    rect.height = 75;
    rect.top = 0;
    rect.left = 235;
    texture_obj = sfTexture_createFromFile(
            "./texture/button.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfSprite_setTextureRect(sprite_obj, rect);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_level_5(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;
    sfIntRect rect;

    scale.x = 2;
    scale.y = 2;
    pos_obj.x = 900;
    pos_obj.y = 500;
    rect.width = 75;
    rect.height = 75;
    rect.top = 0;
    rect.left = 315;
    texture_obj = sfTexture_createFromFile(
            "./texture/button.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfSprite_setTextureRect(sprite_obj, rect);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}