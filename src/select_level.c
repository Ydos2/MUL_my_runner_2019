/*
** EPITECH PROJECT, 2019
** select_level
** File description:
** select_level
*/

#include "frambuffer.h"
#include "my.h"

void set_menu_select_level(ui_t *ui, link_t *link)
{
    draw_ui_skin(ui->window);
    draw_ui_return(ui->window);
    draw_level_1(ui);
    draw_level_2(ui);
    draw_level_3(ui);
    draw_level_4(ui);
    draw_level_5(ui);
    if (ui->start_button_press == 1) {
        initialise_var(ui, link);
        ui->play_one = 0;
        ui->menu = 0;
        ui->start_button_press = 0;
    }
}

void draw_select_level(ui_t *ui)
{
    sfVector2f position_score;

    position_score.x = 775;
    position_score.y = 625;
    sfFont* font;
    sfText *score;
    font = sfFont_createFromFile("font/Krisha-Regular.otf");
    score = sfText_create();
    sfText_setString(score, "Select your level");
    sfText_setFont(score, font);
    sfText_setCharacterSize(score, 100);
    sfText_setOutlineColor(score, sfWhite);
    sfText_setOutlineThickness(score, 2);
    sfText_setPosition(score, position_score);
    sfText_setColor(score, sfBlack);
    sfRenderWindow_drawText(ui->window, score, NULL);
    sfFont_destroy(font);
}

void manage_mouse_click_lvl(sfMouseButtonEvent event, link_t *link, ui_t *ui
    , map_t *map_struct)
{
    char *argv1[2] = {"./my_runner", "./map/map1"};
    char *argv2[2] = {"./my_runner", "./map/map2"};
    char *argv3[2] = {"./my_runner", "./map/map3"};

    if (event.button == sfMouseLeft) {
        if (event.x <= 225 && event.x >= 100 &&
        event.y <= 635 && event.y > 500)
            start_map(argv1, map_struct);
        if (event.x <= 425 && event.x >= 300 &&
        event.y <= 635 && event.y > 500)
            start_map(argv2, map_struct);
        if (event.x <= 625 && event.x >= 500 &&
        event.y <= 635 && event.y > 500)
            start_map(argv3, map_struct);
        manage_click_level_extand(event, link, ui, map_struct);
    }
}

void manage_click_level_extand(sfMouseButtonEvent event, link_t *link, ui_t *ui
    , map_t *map_struct)
{
    char *argv4[2] = {"./my_runner", "./map/map4"};
    char *argv5[2] = {"./my_runner", "./map/map5"};

    if (event.x <= 825 && event.x >= 700 &&
        event.y <= 635 && event.y > 500)
            start_map(argv4, map_struct);
    if (event.x <= 1025 && event.x >= 900 &&
        event.y <= 635 && event.y > 500)
            start_map(argv5, map_struct);
    if (event.x <= 950 && event.x >= 750 &&
        event.y <= 850 && event.y > 750)
            ui->menu = 1;
}