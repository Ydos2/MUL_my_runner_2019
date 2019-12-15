/*
** EPITECH PROJECT, 2019
** skin
** File description:
** skin
*/

#include "frambuffer.h"
#include "my.h"

sfTexture* get_skin(link_t *link, sfTexture* texture_link)
{
    if (link->skin == 0)
        texture_link = sfTexture_createFromFile("./texture/link_run.png",
                                NULL);
    if (link->skin == 1)
        texture_link = sfTexture_createFromFile("./texture/link_run_2.png",
                                NULL);
    if (link->skin == 2)
        texture_link = sfTexture_createFromFile("./texture/link_run_3.png",
                                NULL);
    if (link->skin == 3)
        texture_link = sfTexture_createFromFile("./texture/link_run_4.png",
                                NULL);
    if (link->skin == 4)
        texture_link = sfTexture_createFromFile("./texture/link_run_5.png",
                                NULL);
    return (texture_link);
}

void draw_ui_skin(sfRenderWindow *window)
{
    sfVector2f position_score;

    position_score.x = 700;
    position_score.y = 250;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Select your skin");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 160);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void draw_button_skin(sfRenderWindow *window)
{
    sfVector2f position_score;

    position_score.x = 800;
    position_score.y = 700;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Select your skin");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 100);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void draw_ui_return(sfRenderWindow *window)
{
    sfVector2f position_score;

    position_score.x = 750;
    position_score.y = 750;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Return");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 100);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}