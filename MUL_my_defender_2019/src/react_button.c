/*
** EPITECH PROJECT, 2020
** defender
** File description:
** react_button_main
*/

#include "defender.h"

void react_button_pause2(game_t *game)
{
    if (game->mouse.x >= game->pos3.x && game->mouse.x <= 1775)
        if (game->mouse.y >= game->pos3.y && game->mouse.y <= 605) {
            sfRectangleShape_setOutlineColor(game->but3, sfRed);
            if (sfMouse_isButtonPressed(sfMouseLeft))
                game->ret = MAIN;
        }
}

void react_button_pause(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->win);
    sfRectangleShape_setOutlineColor(game->but1, sfWhite);
    sfRectangleShape_setOutlineColor(game->but2, sfWhite);
    sfRectangleShape_setOutlineColor(game->but3, sfWhite);
    if (game->mouse.x >= game->pos1.x && game->mouse.x <= 610)
        if (game->mouse.y >= game->pos1.y && game->mouse.y <= 605) {
            sfRectangleShape_setOutlineColor(game->but1, sfRed);
            if (sfMouse_isButtonPressed(sfMouseLeft))
                game->ret = GAME;
        }
    if (game->mouse.x >= game->pos2.x && game->mouse.x <= 1080)
        if (game->mouse.y >= game->pos2.y && game->mouse.y <= 905) {
            sfRectangleShape_setOutlineColor(game->but2, sfRed);
            if (sfMouse_isButtonPressed(sfMouseLeft))
                game->ret = END;
        }
    react_button_pause2(game);
}

void react_button_main(main_t *menu, game_t *game)
{
    menu->mouse = sfMouse_getPositionRenderWindow(game->win);
    sfRectangleShape_setOutlineColor(menu->but1, sfWhite);
    sfRectangleShape_setOutlineColor(menu->but2, sfWhite);
    if (menu->mouse.x >= menu->position1.x && menu->mouse.x <= 415)
        if (menu->mouse.y >= menu->position1.y && menu->mouse.y <= 640) {
            sfRectangleShape_setOutlineColor(menu->but1, sfYellow);
            if (sfMouse_isButtonPressed(sfMouseLeft))
                game->ret = GAME;
        }
    if (menu->mouse.x >= menu->position2.x && menu->mouse.x <= 415)
        if (menu->mouse.y >= menu->position2.y && menu->mouse.y <= 790) {
            sfRectangleShape_setOutlineColor(menu->but2, sfYellow);
            if (sfMouse_isButtonPressed(sfMouseLeft))
                game->ret = END;
        }
}
