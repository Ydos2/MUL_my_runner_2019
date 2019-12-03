/*
** EPITECH PROJECT, 2019
** run_sound
** File description:
** run_sound
*/

#include "include/frambuffer.h"
#include "include/my.h"

void sound_jump(void)
{
    sfSound *jump_sound = NULL;
    float volume = 50;
    sfSoundBuffer* buffer = NULL;

    buffer = sfSoundBuffer_createFromFile("./sound/Gun+1.ogg");
    jump_sound = sfSound_create();
    sfSound_setBuffer(jump_sound, buffer);
    sfSound_setVolume(jump_sound, volume);
    sfSound_play(jump_sound);
}

void music_game(ui_t *ui_struct)
{
    float volume = 10;
    sfBool loop = sfTrue;

    ui_struct->music_sound = sfMusic_createFromFile("./sound/country.ogg");
    sfMusic_setVolume(ui_struct->music_sound, volume);
    sfMusic_setLoop(ui_struct->music_sound, loop);
    sfMusic_play(ui_struct->music_sound);
}