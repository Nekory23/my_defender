/*
** EPITECH PROJECT, 2020
** defender
** File description:
** display main
*/

#include "defender.h"

void event_close(game_t *game, tower_t *tw)
{
    while (sfRenderWindow_pollEvent(game->win, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->win);
        if (game->event.type == sfEvtMouseButtonPressed)
            check_mouse(game, tw);
    }
}

void event(game_t *game, tower_t *tw)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        while (sfRenderWindow_isOpen(game->win)) {
            event_close(game, tw);
            if (game->ret == 0)
                react_button_pause(game);
            if (game->ret == END || game->ret == MAIN)
                break;
            if (game->ret == GAME) {
                game->ret = 0;
                break;
            }
            draw_pause(game);
            sfRenderWindow_display(game->win);
        }
}

void display_game(game_t *game, character_t *charac, tower_t *tw)
{
    game->ret = 0;
    sfMusic_play(game->battle_music);
    sfMusic_setLoop(game->battle_music, sfTrue);
    while (sfRenderWindow_isOpen(game->win)) {
        event_close(game, tw);
        event(game, tw);
        if (game->ret == END || game->ret == MAIN) {
            if (game->ret == END)
                game->ret = -3;
            sfRenderWindow_close(game->win);
        }
        sfRenderWindow_clear(game->win, sfBlack);
        if (game->defeat == 0 || game->wingame == 10)
            end_game(game);
        game->mouse = sfMouse_getPositionRenderWindow(game->win);
        check_mouse_pos(game, tw);
        draw_game(game);
        draw_enemy(game, charac, tw);
        draw_tower(game, tw);
        sfRenderWindow_display(game->win);
    }
}

void display(main_t *menu, game_t *game, character_t *charac, tower_t *tw)
{
    fill_struct(menu, game, charac, tw);
    sfRenderWindow_setFramerateLimit(game->win, 60);
    sfMusic_play(menu->music);
    sfMusic_setLoop(menu->music, sfTrue);
    while (sfRenderWindow_isOpen(game->win)) {
        event_close(game, tw);
        if (game->ret == 0) {
            react_button_main(menu, game);
            draw_main(menu, game);
        }
        else if (game->ret == END)
            break;
        else {
            sfMusic_pause(menu->music);
            display_game(game, charac, tw);
        }
        sfRenderWindow_display(game->win);
    }
    my_destroy(menu, game, charac, tw);
}
