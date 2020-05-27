/*
** EPITECH PROJECT, 2020
** defender
** File description:
** create button
*/

#include "defender.h"

void create_other_button_pause(game_t *game)
{
    game->but3 = sfRectangleShape_create();
    game->pos3.x = 1175;
    game->pos3.y = 450;
    sfRectangleShape_setPosition(game->but3, game->pos3);
    game->size3.x = 600;
    game->size3.y = 155;
    sfRectangleShape_setSize(game->but3, game->size3);
    sfRectangleShape_setOutlineColor(game->but3, sfWhite);
    sfRectangleShape_setOutlineThickness(game->but3, 5);
    sfRectangleShape_setFillColor(game->but3, sfTransparent);
}

void create_button_pause(game_t *game)
{
    game->but1 = sfRectangleShape_create();
    game->pos1.x = 180;
    game->pos1.y = 450;
    sfRectangleShape_setPosition(game->but1, game->pos1);
    game->size1.x = 430;
    game->size1.y = 155;
    sfRectangleShape_setSize(game->but1, game->size1);
    sfRectangleShape_setOutlineColor(game->but1, sfWhite);
    sfRectangleShape_setOutlineThickness(game->but1, 5);
    sfRectangleShape_setFillColor(game->but1, sfTransparent);
    game->but2 = sfRectangleShape_create();
    game->pos2.x = 780;
    game->pos2.y = 750;
    sfRectangleShape_setPosition(game->but2, game->pos2);
    game->size2.x = 300;
    game->size2.y = 155;
    sfRectangleShape_setSize(game->but2, game->size2);
    sfRectangleShape_setOutlineColor(game->but2, sfWhite);
    sfRectangleShape_setOutlineThickness(game->but2, 5);
    sfRectangleShape_setFillColor(game->but2, sfTransparent);
    create_other_button_pause(game);
}

void create_button_main(main_t *menu)
{
    menu->but1 = sfRectangleShape_create();
    menu->position1.x = 190;
    menu->position1.y = 510;
    sfRectangleShape_setPosition(menu->but1, menu->position1);
    menu->size1.x = 225;
    menu->size1.y = 125;
    sfRectangleShape_setSize(menu->but1, menu->size1);
    sfRectangleShape_setOutlineColor(menu->but1, sfWhite);
    sfRectangleShape_setOutlineThickness(menu->but1, 3);
    sfRectangleShape_setFillColor(menu->but1, sfTransparent);
    menu->but2 = sfRectangleShape_create();
    menu->position2.x = 190;
    menu->position2.y = 665;
    sfRectangleShape_setPosition(menu->but2, menu->position2);
    menu->size2.x = 225;
    menu->size2.y = 125;
    sfRectangleShape_setSize(menu->but2, menu->size2);
    sfRectangleShape_setOutlineThickness(menu->but2, 3);
    sfRectangleShape_setOutlineColor(menu->but2, sfWhite);
    sfRectangleShape_setFillColor(menu->but2, sfTransparent);
}
