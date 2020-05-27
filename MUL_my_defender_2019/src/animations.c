/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** animations for the enemies
*/

#include "defender.h"

void new_rect_side2(int pos, character_t *charac)
{
    switch (pos) {
    case 505 : charac->rect.left += 45;
        charac->rect.width = 60;
        break;
    case 550 : charac->rect.left += 60;
        charac->rect.width = 55;
        break;
    case 610 : charac->rect.left = 240;
        charac->rect.width = 45;
        break;
    }
}

void new_rect_side(character_t *charac)
{
    int pos = charac->rect.left;

    charac->rect.top = 65;
    switch (pos) {
    case 240 : charac->rect.left += 45;
        charac->rect.width = 50;
        break;
    case 285 : charac->rect.left += 50;
        charac->rect.width = 65;
        break;
    case 335 : charac->rect.left += 65;
        charac->rect.width = 60;
        break;
    case 400 : charac->rect.left += 60;
        charac->rect.width = 45;
        break;
    case 460 : charac->rect.left += 45;
        break;
    }
    new_rect_side2(pos, charac);
}

void new_rect_front2(int pos, character_t *charac)
{
    switch (pos) {
    case 825 : charac->rect.left += 35;
        break;
    case 860 : charac->rect.left += 35;
        break;
    case 895 : charac->rect.left = 665;
        charac->rect.width = 30;
        break;
    }
}

void new_rect_front(character_t *charac)
{
    int pos = charac->rect.left;

    charac->rect.width = 30;
    charac->rect.top = 0;
    switch (pos) {
    case 665 : charac->rect.left += 30;
        break;
    case 695 : charac->rect.left += 30;
        charac->rect.width = 35;
        break;
    case 725 : charac->rect.left += 35;
        break;
    case 760 : charac->rect.left += 35;
        charac->rect.width = 30;
        break;
    case 795 : charac->rect.left += 30;
        charac->rect.width = 35;
        break;
    }
    new_rect_front2(pos, charac);
}
