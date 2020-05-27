/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** defense game
*/

#include "defender.h"

int display_help(void)
{
    my_putstr("USAGE : \n\t./my_defender\n\n");
    my_putstr("HOW TO PLAY :\n\tECHAP : pauses the game\n");
    my_putstr("\tMOUSE : interact with the buttons and towers\n\n");
    my_putstr("MAIN MENU :\n\tStart : starts the game\n");
    my_putstr("\tQuit  : quits the game\n\n");
    my_putstr("GAME :\n\tClick : place the towers\n\n");
    my_putstr("PAUSE MENU :\n");
    my_putstr("\tMain menu : returns to the main menu\n");
    my_putstr("\tQuit : quits the game\n\tResume : resumes the game\n\n");
    return (0);
}

int main(int ac, char **av)
{
    main_t *menu = malloc(sizeof(main_t));
    game_t *game = malloc(sizeof(game_t));
    character_t *charac = malloc(sizeof(character_t));
    tower_t *tower = malloc(sizeof(tower_t));

    if (ac == 2 && my_strcmp(av[1], "-h"))
        return (display_help());
    display(menu, game, charac, tower);
    if (game->ret == MAIN)
        display(menu, game, charac, tower);
    free(menu);
    free(charac);
    free(game);
    free(tower);
    return (SUCCESS);
}
