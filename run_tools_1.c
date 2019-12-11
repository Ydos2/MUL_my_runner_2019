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
    if (ui_struct->seconds > 0.1)
        sfClock_restart(ui_struct->clock);
}

void destroy_obj1(ui_t *ui, map_t *map_struct, link_t *link, obj_t *obj)
{
    free(map_struct->map);
    free(map_struct);
    sfMusic_stop(ui->music_sound);
    sfMusic_destroy(ui->music_sound);
    sfClock_destroy(ui->clock);
    sfRenderWindow_destroy(ui->window);
    free(ui);
    free(link);
    free(obj);
}

char my_compt(char *str)
{
    char i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    char save = 0;
    char a = my_compt(str) - 1;
    char b = 0;

    while (b < a) {
        save = str[b];
        str[b] = str[a];
        str[a] = save;
        b++;
        a--;
    }
    return (str);
}