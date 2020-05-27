/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** move the enemy
*/

#include "defender.h"

void pass_enemy(character_t *charac, game_t *game)
{
    if (charac->pos.x == 1920)
        sfSound_play(game->sound1);
    if (charac->pos.x == 2000) {
        charac->pos.x = -200;
        charac->pos.y = 225;
        game->defeat -= 1;
        sfText_setString(game->lifenb, trans_nb_to_char(game->defeat));
    }
}

void move_left(character_t *charac, game_t *game)
{
    if (charac->rect.left >= 665 || charac->rect.left <= 240)
        charac->rect.left = 240;
    new_rect_side(charac);
    if (charac->pos.x == -50)
        sfSound_play(game->sound);
    charac->pos.x += 10;
    pass_enemy(charac, game);
}

void move_down(character_t *charac)
{
    if (charac->rect.left >= 240 && charac->rect.left <= 610)
        charac->rect.left = 665;
    new_rect_front(charac);
    charac->pos.y += 5;
}

void move_up(character_t *charac)
{
    if (charac->rect.left > 230)
        charac->rect.left = 0;
    new_rect_back(charac);
    charac->pos.y -= 5;
}
