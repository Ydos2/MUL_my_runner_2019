/*
** EPITECH PROJECT, 2019
** draw_ui
** File description:
** draw_ui
*/

#include "include/frambuffer.h"
#include "include/my.h"

void draw_ui_gameover(sfRenderWindow *window)
{
    int c = 0;
    sfVector2f position_score;

    position_score.x = 750;
    position_score.y = 300;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Game Over");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 160);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void draw_ui_start(sfRenderWindow *window)
{
    int c = 0;
    sfVector2f position_score;

    position_score.x = 750;
    position_score.y = 300;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Start Game");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 160);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void draw_button_play(sfRenderWindow *window)
{
    int c = 0;
    sfVector2f position_score;

    position_score.x = 900;
    position_score.y = 600;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Play");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 100);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void draw_button_quit(sfRenderWindow *window)
{
    int c = 0;
    sfVector2f position_score;

    position_score.x = 900;
    position_score.y = 750;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Quit");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 100);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}