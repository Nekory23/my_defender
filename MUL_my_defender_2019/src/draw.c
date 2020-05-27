/*
** EPITECH PROJECT, 2020
** defender
** File description:
** draw
*/

#include "defender.h"

void draw_enemy(game_t *game, character_t *charac, tower_t *tw)
{
    sfRenderWindow_drawSprite(game->win, charac->sprite, NULL);
    charac->time_c = sfClock_getElapsedTime(charac->clock_sprite);
    if (sfTime_asSeconds(charac->time_c) >= sfTime_asSeconds(sfSeconds(0.1))) {
        sfSprite_setTextureRect(charac->sprite, charac->rect);
        sfClock_restart(charac->clock_sprite);
        charac->time_c = sfTime_Zero;
        check_attack(game, charac, tw);
        if (charac->pos.x < 680 || charac->pos.y == 650 || charac->pos.x > 1250)
            move_left(charac, game);
        if (charac->pos.x == 680)
            move_down(charac);
        if (charac->pos.x == 1250) {
            if (charac->pos.y == 350)
                move_left(charac, game);
            else
                move_up(charac);
                }
        sfSprite_setPosition(charac->sprite, charac->pos);
    }
}

void draw_tower(game_t *game, tower_t *tw)
{
    sfRenderWindow_drawSprite(game->win, tw->s1, NULL);
    sfRenderWindow_drawSprite(game->win, tw->s2, NULL);
    sfRenderWindow_drawSprite(game->win, tw->s3, NULL);
    sfRenderWindow_drawSprite(game->win, tw->s4, NULL);
    if (tw->tp3 != NULL)
        sfRenderWindow_drawSprite(game->win, tw->tp3, NULL);
    if (tw->tp2 != NULL)
        sfRenderWindow_drawSprite(game->win, tw->tp2, NULL);
    if (tw->tp1 != NULL)
        sfRenderWindow_drawSprite(game->win, tw->tp1, NULL);
}

void draw_game(game_t *game)
{
    sfRenderWindow_drawSprite(game->win, game->map_s, NULL);
    sfRenderWindow_drawText(game->win, game->life, NULL);
    sfRenderWindow_drawText(game->win, game->lifenb, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->slot1, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->slot2, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->slot3, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->build_m, NULL);
}

void draw_pause(game_t *game)
{
    sfRenderWindow_drawText(game->win, game->pause, NULL);
    sfRenderWindow_drawText(game->win, game->resume, NULL);
    sfRenderWindow_drawText(game->win, game->main, NULL);
    sfRenderWindow_drawText(game->win, game->quit, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->but1, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->but2, NULL);
    sfRenderWindow_drawRectangleShape(game->win, game->but3, NULL);
}

void draw_main(main_t *menu, game_t *game)
{
    sfRenderWindow_drawSprite(game->win, menu->background_s, NULL);
    sfRenderWindow_drawText(game->win, menu->text, NULL);
    sfRenderWindow_drawText(game->win, menu->text2, NULL);
    sfRenderWindow_drawRectangleShape(game->win, menu->but1, NULL);
    sfRenderWindow_drawRectangleShape(game->win, menu->but2, NULL);
}
