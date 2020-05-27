/*
** EPITECH PROJECT, 2020
** defender
** File description:
** end_game
*/

#include "defender.h"

void create_final_text(game_t *game)
{
    game->game_over = sfText_create();
    sfText_setString(game->game_over, "GAME OVER");
    sfText_setCharacterSize(game->game_over, 300);
    sfText_setPosition(game->game_over, (sfVector2f) {380, 300});
    sfText_setColor(game->game_over, sfWhite);
    sfText_setFont(game->game_over, game->font);
    game->winner = sfText_create();
    sfText_setString(game->winner, "YOU WIN");
    sfText_setCharacterSize(game->winner, 300);
    sfText_setPosition(game->winner, (sfVector2f) {600, 300});
    sfText_setColor(game->winner, sfWhite);
    sfText_setFont(game->winner, game->font);
}

void draw_end_game(game_t *game)
{
    if (game->defeat == 0)
        sfRenderWindow_drawText(game->win, game->game_over, NULL);
    if (game->wingame == 10)
        sfRenderWindow_drawText(game->win, game->winner, NULL);
}

void end_game(game_t *game)
{
    sfMusic_pause(game->battle_music);
    create_final_text(game);
    while (sfRenderWindow_isOpen(game->win)) {
        sfRenderWindow_clear(game->win, sfBlack);
        while (sfRenderWindow_pollEvent(game->win, &game->event))
            if (game->event.type == sfEvtClosed)
                sfRenderWindow_close(game->win);
        draw_end_game(game);
        sfRenderWindow_display(game->win);
    }
}
