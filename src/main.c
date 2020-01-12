/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "frambuffer.h"
#include "my.h"

int main(int ac, char **av)
{
    link_t *link = NULL;
    ui_t *ui_struct = NULL;
    map_t *map_struct = NULL;
    obj_t *obj_struct = NULL;

    for (int help_int = draw_help(ac, av); help_int == 1;)
        return (0);
    link = malloc(sizeof(link_t));
    ui_struct = malloc(sizeof(ui_t));
    map_struct = malloc(sizeof(map_t));
    obj_struct = malloc(sizeof(obj_t));
    start_script(ui_struct, map_struct, link, av);
    initialise_game(ui_struct, link, map_struct, obj_struct);
    destroy_obj1(ui_struct, map_struct, link, obj_struct);
    return EXIT_SUCCESS;
}

void initialise_game(ui_t *ui_struct, link_t *link
    , map_t *map_struct, obj_t *obj_struct)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(ui_struct->window)) {
        while (sfRenderWindow_pollEvent(ui_struct->window, &event))
            analyse_events(map_struct, event, link, ui_struct);
        extend_window_open(ui_struct, link, map_struct, obj_struct);
        if (ui_struct->quit == 1)
            break;
    }
}