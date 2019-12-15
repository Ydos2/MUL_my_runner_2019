/*
** EPITECH PROJECT, 2019
** run_main
** File description:
** run_main
*/

#include "frambuffer.h"
#include "my.h"

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
        write(1, "Finite runner created with CSFML.\n", 34);
        write(1, "\n", 1);
        write(1, "USAGE\n", 6);
        write(1, "\t./my_runner map.txt\n", 21);
        write(1, "\n", 1);
        write(1, "\n", 1);
        write(1, "OPTIONS\n", 8);
        write(1, "\t-i\tlaunch the game in infinity mode.\n", 38);
        write(1, "\t-h\tprint the usage and quit\n", 29);
        write(1, "\n", 1);
        write(1, "USER INTERACTIONS\n", 18);
        write(1, "\tSPACE_KEY\tjump.\n", 17);
        return (1);
    } else {
        return (0);
    }
}