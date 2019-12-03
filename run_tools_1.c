/*
** EPITECH PROJECT, 2019
** run_tools_1
** File description:
** run_tools_1
*/

#include "include/frambuffer.h"
#include "include/my.h"

void create_clock_func(ui_t *ui_struct)
{
    ui_struct->time = sfClock_getElapsedTime(ui_struct->clock);
    ui_struct->seconds = ui_struct->time.microseconds / 1000000.0;
    if (ui_struct->seconds > 0.15)
        sfClock_restart(ui_struct->clock);
}

void destroy_obj1(ui_t *ui)
{
    sfMusic_stop(ui->music_sound);
    sfMusic_destroy(ui->music_sound);
    sfClock_destroy(ui->clock);
    sfSprite_destroy(ui->sprite);
    sfTexture_destroy(ui->texture);
    sfRenderWindow_destroy(ui->window);
}