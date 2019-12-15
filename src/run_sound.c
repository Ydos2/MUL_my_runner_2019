/*
** EPITECH PROJECT, 2019
** run_sound
** File description:
** run_sound
*/

#include "frambuffer.h"
#include "my.h"

void sound_jump(ui_t *ui_struct)
{
    float volume = 50;

    ui_struct->buffer = sfSoundBuffer_createFromFile("./sound/jump.ogg");
    ui_struct->empty_sound = sfSound_create();
    sfSound_setBuffer(ui_struct->empty_sound, ui_struct->buffer);
    sfSound_setVolume(ui_struct->empty_sound, volume);
    sfSound_play(ui_struct->empty_sound);
}

void music_game(ui_t *ui_struct)
{
    float volume = 2;
    sfBool loop = sfTrue;

    ui_struct->music_sound = sfMusic_createFromFile("./sound/Zelda theme.ogg");
    sfMusic_setVolume(ui_struct->music_sound, volume);
    sfMusic_setLoop(ui_struct->music_sound, loop);
    sfMusic_play(ui_struct->music_sound);
}

void music_title(ui_t *ui_struct)
{
    float volume = 10;
    sfBool loop = sfTrue;

    ui_struct->music_sound = sfMusic_createFromFile("./sound/menu.ogg");
    sfMusic_setVolume(ui_struct->music_sound, volume);
    sfMusic_setLoop(ui_struct->music_sound, loop);
    sfMusic_play(ui_struct->music_sound);
}