/*
** EPITECH PROJECT, 2020
** defender
** File description:
** create text
*/

#include "defender.h"

char *trans_nb_to_char(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * nb + 1);

    for (; nb; i++) {
        str[i] = nb % 10 + '0';
        nb /= 10;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}

void create_text_game(game_t *game)
{
    game->life = sfText_create();
    sfText_setString(game->life, "LIFE :");
    sfText_setCharacterSize(game->life, 150);
    sfText_setPosition(game->life, (sfVector2f) {1600, 50});
    sfText_setColor(game->life, sfWhite);
    sfText_setFont(game->life, game->font);
    game->lifenb = sfText_create();
    sfText_setString(game->lifenb, trans_nb_to_char(game->defeat));
    sfText_setCharacterSize(game->lifenb, 150);
    sfText_setPosition(game->lifenb, (sfVector2f) {1850, 50});
    sfText_setColor(game->lifenb, sfWhite);
    sfText_setFont(game->lifenb, game->font);
}

void create_text_pause(game_t *game)
{
    game->font = sfFont_createFromFile("res/KHtext.ttf");
    game->pause = sfText_create();
    sfText_setString(game->pause, "PAUSED");
    sfText_setCharacterSize(game->pause, 300);
    sfText_setPosition(game->pause, (sfVector2f) {550, 50});
    sfText_setFont(game->pause, game->font);
    game->resume = sfText_create();
    sfText_setString(game->resume, "Resume");
    sfText_setCharacterSize(game->resume, 200);
    sfText_setPosition(game->resume, (sfVector2f) {200, 400});
    sfText_setFont(game->resume, game->font);
    game->quit = sfText_create();
    sfText_setString(game->quit, "Quit");
    sfText_setCharacterSize(game->quit, 200);
    sfText_setPosition(game->quit, (sfVector2f) {800, 700});
    sfText_setFont(game->quit, game->font);
    game->main = sfText_create();
    sfText_setString(game->main, "Main menu");
    sfText_setCharacterSize(game->main, 200);
    sfText_setPosition(game->main, (sfVector2f) {1200, 400});
    sfText_setFont(game->main, game->font);
}

void create_text_main(main_t *menu)
{
    menu->font = sfFont_createFromFile("res/KHtext.ttf");
    menu->text = sfText_create();
    sfText_setString(menu->text, "START");
    sfText_setCharacterSize(menu->text, 125);
    sfText_setPosition(menu->text, (sfVector2f) {200, 500});
    sfText_setColor(menu->text, sfBlack);
    sfText_setFont(menu->text, menu->font);
    menu->text2 = sfText_create();
    sfText_setString(menu->text2, "QUIT");
    sfText_setCharacterSize(menu->text2, 125);
    sfText_setPosition(menu->text2, (sfVector2f) {200, 650});
    sfText_setColor(menu->text2, sfBlack);
    sfText_setFont(menu->text2, menu->font);
}
