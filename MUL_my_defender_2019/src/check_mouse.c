/*
** EPITECH PROJECT, 2020
** defender
** File description:
** check_mouse
*/

#include "defender.h"

void copy_sprite2(tower_t *tw, int nb)
{
    if (nb == 3) {
        if (tw->tp1 == NULL && tw->nb1[0] == 0) {
            tw->tp1 = sfSprite_copy(tw->s3);
            tw->nb1[0] = 1;
        } else if (tw->tp2 == NULL && tw->nb1[1] == 0) {
            tw->tp2 = sfSprite_copy(tw->s3);
            tw->nb1[1] = 1;
        } else
            tw->tp3 = sfSprite_copy(tw->s3);
    }
    if (nb == 4) {
        if (tw->tp1 == NULL && tw->nb1[0] == 0) {
            tw->tp1 = sfSprite_copy(tw->s4);
            tw->nb1[0] = 1;
        } else if (tw->tp2 == NULL && tw->nb1[1] == 0) {
            tw->tp2 = sfSprite_copy(tw->s4);
            tw->nb1[1] = 1;
        } else
            tw->tp3 = sfSprite_copy(tw->s4);
    }
}

void copy_sprite(tower_t *tw, int nb)
{
    if (nb == 1) {
        if (tw->tp1 == NULL && tw->nb1[1] == 0) {
            tw->tp1 = sfSprite_copy(tw->s1);
            tw->nb1[0] = 1;
        } else if (tw->tp2 == NULL && tw->nb1[1] == 0) {
            tw->tp2 = sfSprite_copy(tw->s1);
            tw->nb1[1] = 1;
        } else
            tw->tp3 = sfSprite_copy(tw->s1);
    }
    if (nb == 2) {
        if (tw->tp1 == NULL && tw->nb1[0] == 0) {
            tw->tp1 = sfSprite_copy(tw->s2);
            tw->nb1[0] = 1;
        } else if (tw->tp2 == NULL && tw->nb1[1] == 0) {
            tw->tp2 = sfSprite_copy(tw->s2);
            tw->nb1[1] = 1;
        } else
            tw->tp3 = sfSprite_copy(tw->s2);
    }
}

void check_mouse(game_t *game, tower_t *tw)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->win);
    if (game->mouse.x >= 700 && game->mouse.x <= 750)
        if (game->mouse.y >= 900 && game->mouse.y <= 1000)
            copy_sprite(tw, 1);
    if (game->mouse.x >= 850 && game->mouse.x <= 900)
        if (game->mouse.y >= 900 && game->mouse.y <= 1000)
            copy_sprite(tw, 2);
    if (game->mouse.x >= 1000 && game->mouse.x <= 1050)
        if (game->mouse.y >= 900 && game->mouse.y <= 1000)
            copy_sprite2(tw, 3);
    if (game->mouse.x >= 1150 && game->mouse.x <= 1200)
        if (game->mouse.y >= 900 && game->mouse.y <= 1000)
            copy_sprite2(tw, 4);
}
