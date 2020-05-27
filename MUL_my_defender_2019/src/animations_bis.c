/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** rest of the animations of the enemy
*/

#include "defender.h"

void new_rect_back2(int pos, character_t *charac)
{
    switch (pos) {
    case 155 : charac->rect.left += 30;
        break;
    case 185 : charac->rect.left += 30;
        break;
    case 215 : charac->rect.left = 0;
        break;
    }
}

void new_rect_back(character_t *charac)
{
    int pos = charac->rect.left;

    charac->rect.width = 30;
    charac->rect.top = 65;
    switch (pos) {
    case 0 : charac->rect.left += 30;
        break;
    case 30 : charac->rect.left += 30;
        break;
    case 60 : charac->rect.left += 30;
        break;
    case 90 : charac->rect.left += 30;
        charac->rect.width = 30;
        break;
    case 120 : charac->rect.left += 35;
        break;
    }
    new_rect_back2(pos, charac);
}
