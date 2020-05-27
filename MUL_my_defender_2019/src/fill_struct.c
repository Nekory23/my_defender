/*
** EPITECH PROJECT, 2020
** defender
** File description:
** main
*/

#include "defender.h"

void fill_struct_enemy(character_t *charac)
{
    charac->rect.width = 30;
    charac->rect.height = 65;
    charac->rect.top = 65;
    charac->rect.left = 240;
    charac->texture = sfTexture_createFromFile("res/enemy.png", NULL);
    charac->sprite = sfSprite_create();
    sfSprite_setTexture(charac->sprite, charac->texture, sfTrue);
    sfSprite_setTextureRect(charac->sprite, charac->rect);
    charac->pos.x = -300;
    charac->pos.y = 225;
    sfSprite_setPosition(charac->sprite, charac->pos);
    charac->clock_sprite = sfClock_create();
}

void fill_struct_game(game_t *game, character_t *charac)
{
    game->map = sfTexture_createFromFile("res/sand_tower_def.jpg", NULL);
    game->map_s = sfSprite_create();
    sfSprite_setTexture(game->map_s, game->map, sfTrue);
    game->buffer = sfSoundBuffer_createFromFile("res/sound.ogg");
    game->sound = sfSound_create();
    game->buffer1 = sfSoundBuffer_createFromFile("res/hit.ogg");
    game->sound1 = sfSound_create();
    sfSound_setBuffer(game->sound1, game->buffer1);
    sfSound_setBuffer(game->sound, game->buffer);
    game->battle_music = sfMusic_createFromFile("res/battle.ogg");
    game->wingame = 0;
    game->defeat = 3;
    create_text_pause(game);
    create_text_game(game);
    create_button_pause(game);
    fill_struct_enemy(charac);
    create_slots(game);
    create_build_menu(game);
}

void set_pos_and_rect(tower_t *tw)
{
    tw->rect1.width = 45;
    tw->rect1.height = 70;
    tw->rect1.top = 0;
    tw->pos1.x = 700;
    tw->pos1.y = 925;
    tw->rect2.width = 45;
    tw->rect2.height = 65;
    tw->rect2.top = 70;
    tw->pos2.x = 850;
    tw->pos2.y = 925;
    tw->rect3.width = 45;
    tw->rect3.height = 65;
    tw->rect3.top = 135;
    tw->pos3.x = 1000;
    tw->pos3.y = 925;
    tw->rect4.width = 45;
    tw->rect4.height = 65;
    tw->rect4.top = 200;
    tw->pos4.x = 1150;
    tw->pos4.y = 925;
}

void fill_tower(tower_t *tw)
{
    set_pos_and_rect(tw);
    tw->texture = sfTexture_createFromFile("res/sora.png", NULL);
    tw->s1 = sfSprite_create();
    sfSprite_setTexture(tw->s1, tw->texture, sfTrue);
    sfSprite_setTextureRect(tw->s1, tw->rect1);
    sfSprite_setPosition(tw->s1, tw->pos1);
    tw->s2 = sfSprite_copy(tw->s1);
    sfSprite_setTextureRect(tw->s2, tw->rect2);
    sfSprite_setPosition(tw->s2, tw->pos2);
    tw->s3 = sfSprite_copy(tw->s1);
    sfSprite_setTextureRect(tw->s3, tw->rect3);
    sfSprite_setPosition(tw->s3, tw->pos3);
    tw->s4 = sfSprite_copy(tw->s1);
    sfSprite_setTextureRect(tw->s4, tw->rect4);
    sfSprite_setPosition(tw->s4, tw->pos4);
    tw->tp1 = NULL;
    tw->tp2 = NULL;
    tw->tp3 = NULL;
    tw->nb = malloc(sizeof(int) * 3);
    for (int i = 0; i != 3; i++)
        tw->nb[i] = 0;
}

void fill_struct(main_t *menu, game_t *game, character_t *charac, tower_t *tw)
{
    sfVideoMode vm = {1920, 1080, 32};

    game->win = sfRenderWindow_create(vm, DEF, sfResize | sfClose, NULL);
    menu->background = sfTexture_createFromFile("res/main_back.jpg", NULL);
    menu->background_s = sfSprite_create();
    sfSprite_setTexture(menu->background_s, menu->background, sfTrue);
    menu->music = sfMusic_createFromFile("res/main.ogg");
    create_text_main(menu);
    create_button_main(menu);
    game->ret = 0;
    fill_struct_game(game, charac);
    fill_tower(tw);
    tw->nb1 = malloc(sizeof(int) * 3);
    for (int i = 0; i != 3; i++)
        tw->nb1[i] = 0;
}
