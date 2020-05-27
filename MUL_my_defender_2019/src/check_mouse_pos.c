/*
** EPITECH PROJECT, 2020
** defender
** File description:
** check_mouse_pos
*/

#include "defender.h"

void change_pos_sprite(tower_t *tw)
{
    if (tw->tp3 != NULL)
        sfSprite_setPosition(tw->tp3, tw->recttp);
    else if (tw->tp2 != NULL)
        sfSprite_setPosition(tw->tp2, tw->recttp);
    else
        sfSprite_setPosition(tw->tp1, tw->recttp);
}

void check_mouse_pos2(game_t *game, tower_t *tw)
{
    if (game->mouse.x >= game->pos_slot3.x && game->mouse.x <= 550)
        if (game->mouse.y >= game->pos_slot3.y && game->mouse.y <= 500)
            if (sfMouse_isButtonPressed(sfMouseLeft) && tw->nb[2] == 0) {
                tw->recttp.x = 475;
                tw->recttp.y = 415;
                change_pos_sprite(tw);
                tw->nb[2] = 1;
            }
}

void check_mouse_pos(game_t *game, tower_t *tw)
{
    if (game->mouse.x >= game->pos_slot1.x && game->mouse.x <= 1500)
        if (game->mouse.y >= game->pos_slot1.y && game->mouse.y <= 650)
            if (sfMouse_isButtonPressed(sfMouseLeft) && tw->nb[0] == 0) {
                tw->recttp.x = 1425;
                tw->recttp.y = 565;
                change_pos_sprite(tw);
                tw->nb[0] = 1;
            }
    if (game->mouse.x >= game->pos_slot2.x && game->mouse.x <= 1050)
        if (game->mouse.y >= game->pos_slot2.y && game->mouse.y <= 550)
            if (sfMouse_isButtonPressed(sfMouseLeft) && tw->nb[1] == 0) {
                tw->recttp.x = 975;
                tw->recttp.y = 465;
                change_pos_sprite(tw);
                tw->nb[1] = 1;
            }
    check_mouse_pos2(game, tw);
}
