/*
** EPITECH PROJECT, 2019
** draw_skin
** File description:
** draw_skin
*/

#include "frambuffer.h"
#include "my.h"

void draw_skin_1(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;

    scale.x = 4;
    scale.y = 4;
    pos_obj.x = 100;
    pos_obj.y = 500;
    texture_obj = sfTexture_createFromFile(
            "./texture/Skin_Pose_1.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_skin_2(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;

    scale.x = 4;
    scale.y = 4;
    pos_obj.x = 300;
    pos_obj.y = 500;
    texture_obj = sfTexture_createFromFile(
            "./texture/Skin_Pose_2.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_skin_3(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;

    scale.x = 4;
    scale.y = 4;
    pos_obj.x = 500;
    pos_obj.y = 500;
    texture_obj = sfTexture_createFromFile(
            "./texture/Skin_Pose_3.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_skin_4(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;

    scale.x = 4;
    scale.y = 4;
    pos_obj.x = 700;
    pos_obj.y = 500;
    texture_obj = sfTexture_createFromFile(
            "./texture/Skin_Pose_4.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}

void draw_skin_5(ui_t *ui)
{
    sfSprite* sprite_obj = NULL;
    sfTexture* texture_obj = NULL;
    sfVector2f pos_obj;
    sfVector2f scale;

    scale.x = 4;
    scale.y = 4;
    pos_obj.x = 900;
    pos_obj.y = 500;
    texture_obj = sfTexture_createFromFile(
            "./texture/Skin_Pose_5.png", NULL);
    sprite_obj = sfSprite_create();
    sfSprite_setTexture(sprite_obj, texture_obj, sfTrue);
    sfSprite_setScale(sprite_obj, scale);
    sfSprite_setPosition(sprite_obj, pos_obj);
    sfRenderWindow_drawSprite(ui->window, sprite_obj, NULL);
}