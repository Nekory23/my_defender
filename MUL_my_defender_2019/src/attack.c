/*
** EPITECH PROJECT, 2020
** defender
** File description:
** attack
*/

#include "defender.h"

void attack(game_t *game, character_t *charac)
{
    int random = rand() % 100;

    if (random >= 0 && random <= 3) {
        charac->pos.x = -100;
        charac->pos.y = 225;
        game->wingame += 1;
    }
}

void check_attack(game_t *game, character_t *chrc, tower_t *tw)
{
    if (tw->nb[2] == 1 && chrc->pos.x >= 450 && chrc->pos.x <= 600)
        attack(game, chrc);
    if (tw->nb[1] == 1 && chrc->pos.x >= 950 && chrc->pos.x <= 1100)
        attack(game, chrc);
    if (tw->nb[0] == 1 && chrc->pos.x >= 1400 && chrc->pos.x <= 1550)
        attack(game, chrc);
}
