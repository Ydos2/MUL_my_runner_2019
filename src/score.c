/*
** EPITECH PROJECT, 2019
** score
** File description:
** score
*/

#include "frambuffer.h"
#include "my.h"

void draw_ui_score_one(sfRenderWindow *window)
{
    sfVector2f position_score;

    position_score.x = 35;
    position_score.y = 10;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Score :");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 80);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void draw_ui_score_second(sfRenderWindow *window, ui_t *ui)
{
    sfVector2f position_score;
    char *score_char = my_itoa(ui->score);

    position_score.x = 190;
    position_score.y = 10;
    sfFont *font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, score_char);
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 80);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(window, score, NULL);
    sfFont_destroy(font);
}

void set_score(ui_t *ui)
{
    draw_ui_score_one(ui->window);
    draw_ui_score_second(ui->window, ui);
}

char *my_itoa(int nb)
{
    char *str = malloc(sizeof(char) * 5);
    int i = 0;

    while (nb > 9) {
        str[i] = nb % 10 + 48;
        nb = nb / 10;
        i++;
    }
    str[i] = nb % 10 + 48;
    str[i + 1] = '\0';
    str = my_revstr(str);
    return (str);
}