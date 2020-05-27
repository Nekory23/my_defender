/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** destroy everything
*/

#include "defender.h"

void my_destroy_end(game_t *game, tower_t *tw)
{
    sfSprite_destroy(tw->tp2);
    sfSprite_destroy(tw->tp3);
    free(tw->nb);
    free(tw->nb1);
    sfSoundBuffer_destroy(game->buffer1);
    sfSound_destroy(game->sound1);
    sfRenderWindow_destroy(game->win);
}

void my_destroy_bis(game_t *game, character_t *charac, tower_t *tw)
{
    sfRectangleShape_destroy(game->but3);
    sfText_destroy(game->quit);
    sfRectangleShape_destroy(game->slot1);
    sfRectangleShape_destroy(game->slot2);
    sfRectangleShape_destroy(game->slot3);
    sfRectangleShape_destroy(game->build_m);
    sfText_destroy(game->life);
    sfText_destroy(game->lifenb);
    sfText_destroy(game->winner);
    sfText_destroy(game->game_over);
    sfSoundBuffer_destroy(game->buffer);
    sfTexture_destroy(charac->texture);
    sfSprite_destroy(charac->sprite);
    sfClock_destroy(charac->clock_sprite);
    sfTexture_destroy(tw->texture);
    sfSprite_destroy(tw->s1);
    sfSprite_destroy(tw->s2);
    sfSprite_destroy(tw->s3);
    sfSprite_destroy(tw->s4);
    sfSprite_destroy(tw->tp1);
    my_destroy_end(game, tw);
}

void my_destroy(main_t *menu, game_t *game, character_t *charac, tower_t *tw)
{
    sfTexture_destroy(menu->background);
    sfSprite_destroy(menu->background_s);
    sfText_destroy(menu->text);
    sfText_destroy(menu->text2);
    sfFont_destroy(menu->font);
    sfMusic_destroy(menu->music);
    sfRectangleShape_destroy(menu->but1);
    sfRectangleShape_destroy(menu->but2);
    sfTexture_destroy(game->map);
    sfSprite_destroy(game->map_s);
    sfMusic_destroy(game->music);
    sfMusic_destroy(game->battle_music);
    sfSound_destroy(game->sound);
    sfFont_destroy(game->font);
    sfText_destroy(game->pause);
    sfRectangleShape_destroy(game->but1);
    sfText_destroy(game->resume);
    sfRectangleShape_destroy(game->but2);
    sfText_destroy(game->main);
    my_destroy_bis(game, charac, tw);
}
