/*
** EPITECH PROJECT, 2019
** sound_manager
** File description:
** sound_manager
*/

#include "frambuffer.h"
#include "my.h"

void sound_start(ui_t *ui_struct)
{
    float volume = 50;

    ui_struct->buffer = sfSoundBuffer_createFromFile(
        "./sound/CF.ogg");
    ui_struct->empty_sound = sfSound_create();
    sfSound_setBuffer(ui_struct->empty_sound, ui_struct->buffer);
    sfSound_setVolume(ui_struct->empty_sound, volume);
    sfSound_play(ui_struct->empty_sound);
    sfSoundBuffer_destroy(ui_struct->buffer);
}

void sound_die(ui_t *ui_struct)
{
    float volume = 50;

    ui_struct->buffer = sfSoundBuffer_createFromFile("./sound/game_over.ogg");
    ui_struct->empty_sound = sfSound_create();
    sfSound_setBuffer(ui_struct->empty_sound, ui_struct->buffer);
    sfSound_setVolume(ui_struct->empty_sound, volume);
    sfSound_play(ui_struct->empty_sound);
    sfSoundBuffer_destroy(ui_struct->buffer);
}

void sound_win(ui_t *ui_struct)
{
    float volume = 50;

    ui_struct->buffer = sfSoundBuffer_createFromFile("./sound/win.ogg");
    ui_struct->empty_sound = sfSound_create();
    sfSound_setBuffer(ui_struct->empty_sound, ui_struct->buffer);
    sfSound_setVolume(ui_struct->empty_sound, volume);
    sfSound_play(ui_struct->empty_sound);
    sfSoundBuffer_destroy(ui_struct->buffer);
}

void initialise_sound_manager(ui_t *ui_struct)
{
    if (ui_struct->menu == 0 && ui_struct->play_sound == 0) {
        sfMusic_destroy(ui_struct->music_sound);
        music_game(ui_struct);
        ui_struct->play_sound = 1;
    } else if (ui_struct->menu != 0 && ui_struct->play_sound == 1) {
        sfMusic_destroy(ui_struct->music_sound);
        music_title(ui_struct);
        ui_struct->play_sound = 0;
    }
}