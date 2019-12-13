/*
** EPITECH PROJECT, 2019
** run_main
** File description:
** run_main
*/

#include "include/frambuffer.h"
#include "include/my.h"

int main(int ac, char **av)
{
    sfEvent event;
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
    while (sfRenderWindow_isOpen(ui_struct->window)) {
        while (sfRenderWindow_pollEvent(ui_struct->window, &event))
            analyse_events(ui_struct->window, event, link, ui_struct);
        extend_window_open(ui_struct, link, map_struct, obj_struct);
        if (ui_struct->quit == 1)
            break;
    }
    destroy_obj1(ui_struct, map_struct, link, obj_struct);
    return EXIT_SUCCESS;
}

void start_script(ui_t *ui, map_t *map_struct, link_t *link, char **av)
{
    main_extend_2(ui, link);
    start_map(av, map_struct);
}

void extend_window_open(ui_t *ui_struct, link_t *link
    , map_t *map_struct, obj_t *obj_struct)
{
    initialise_sound_manager(ui_struct);
    main_extend_1(ui_struct);
    set_map(map_struct, ui_struct, obj_struct);
    if (ui_struct->menu == 0)
        define_link(link, ui_struct, map_struct);
    else
        set_menu(ui_struct, link);
    set_score(ui_struct);
    sfRenderWindow_display(ui_struct->window);
}

int draw_help(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Finite runner created with CSFML.\n");
        my_putstr("");
        my_putstr("USAGE\n");
        my_putstr("\t./my_runner map.txt\n");
        my_putstr("");
        my_putstr("");
        my_putstr("OPTIONS\n");
        my_putstr("\t-i\t\tlaunch the game in infinity mode.\n");
        my_putstr("\t-h\t\tprint the usage and quit\n");
        my_putstr("");
        my_putstr("USER INTERACTIONS\n");
        my_putstr("\tSPACE_KEY\t\tjump.\n");
        return (1);
    } else {
        return (0);
    }
}