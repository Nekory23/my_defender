/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** create the slot for the towers
*/

#include "defender.h"

void create_build_menu(game_t *game)
{
    game->slot_color = sfColor_fromRGBA(0, 0, 0, 150);
    game->build_m = sfRectangleShape_create();
    game->pos_menu.x = 550;
    game->pos_menu.y = 880;
    sfRectangleShape_setPosition(game->build_m, game->pos_menu);
    game->size_menu.x = 800;
    game->size_menu.y = 200;
    sfRectangleShape_setSize(game->build_m, game->size_menu);
    sfRectangleShape_setOutlineColor(game->build_m, sfWhite);
    sfRectangleShape_setOutlineThickness(game->build_m, 2);
    sfRectangleShape_setFillColor(game->build_m, game->slot_color);
}

void create_slots(game_t *game)
{
    game->slot_color = sfColor_fromRGB(160, 82, 45);
    game->slot1 = sfRectangleShape_create();
    game->pos_slot1.x = 1400;
    game->pos_slot1.y = 550;
    sfRectangleShape_setPosition(game->slot1, game->pos_slot1);
    game->size_slot1.x = 100;
    game->size_slot1.y = 100;
    sfRectangleShape_setSize(game->slot1, game->size_slot1);
    sfRectangleShape_setOutlineColor(game->slot1, game->slot_color);
    sfRectangleShape_setOutlineThickness(game->slot1, 2);
    sfRectangleShape_setFillColor(game->slot1, sfTransparent);
    game->slot2 = sfRectangleShape_copy(game->slot1);
    game->pos_slot2.x = 950;
    game->pos_slot2.y = 450;
    sfRectangleShape_setPosition(game->slot2, game->pos_slot2);
    game->slot3 = sfRectangleShape_copy(game->slot1);
    game->pos_slot3.x = 450;
    game->pos_slot3.y = 400;
    sfRectangleShape_setPosition(game->slot3, game->pos_slot3);
}
