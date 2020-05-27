/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** defender.h
*/

#ifndef __DEFENDER_H__
#define __DEFENDER_H__

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>

typedef struct main_st
{
    sfTexture *background;
    sfSprite *background_s;
    sfText *text;
    sfText *text2;
    sfFont *font;
    sfMusic *music;
    sfRectangleShape *but1;
    sfVector2f position1;
    sfVector2f size1;
    sfRectangleShape *but2;
    sfVector2f position2;
    sfVector2f size2;
    sfVector2i mouse;
} main_t;

typedef struct game_st
{
    int ret;
    sfRenderWindow *win;
    sfTexture *map;
    sfSprite *map_s;
    sfMusic *music;
    sfMusic *battle_music;
    sfEvent event;
    sfSound *sound;
    sfSoundBuffer *buffer;
    sfSound *sound1;
    sfSoundBuffer *buffer1;
    sfFont *font;
    sfVector2i mouse;
    sfText *pause;
    sfRectangleShape *but1;
    sfVector2f pos1;
    sfVector2f size1;
    sfText *resume;
    sfRectangleShape *but2;
    sfVector2f pos2;
    sfVector2f size2;
    sfText *quit;
    sfRectangleShape *but3;
    sfVector2f pos3;
    sfVector2f size3;
    sfText *main;
    sfColor slot_color;
    sfRectangleShape *slot1;
    sfVector2f pos_slot1;
    sfVector2f size_slot1;
    sfRectangleShape *slot2;
    sfVector2f pos_slot2;
    sfRectangleShape *slot3;
    sfVector2f pos_slot3;
    sfRectangleShape *build_m;
    sfVector2f pos_menu;
    sfVector2f size_menu;
    int wingame;
    int defeat;
    sfText *life;
    sfText *lifenb;
    sfText *winner;
    sfText *game_over;
} game_t;

typedef struct character_st
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
    sfClock *clock_sprite;
    sfTime time_c;
} character_t;

typedef struct tower_st
{
    sfTexture *texture;
    sfSprite *s1;
    sfIntRect rect1;
    sfVector2f pos1;
    sfSprite *s2;
    sfIntRect rect2;
    sfVector2f pos2;
    sfSprite *s3;
    sfIntRect rect3;
    sfVector2f pos3;
    sfSprite *s4;
    sfIntRect rect4;
    sfVector2f pos4;
    sfSprite *tp1;
    sfSprite *tp2;
    sfSprite *tp3;
    sfVector2f recttp;
    int *nb;
    int *nb1;
} tower_t;

void display(main_t *menu, game_t *game, character_t *charac, tower_t *tw);
void end_game(game_t *game);
void my_destroy(main_t *menu, game_t *game, character_t *charac, tower_t *tw);
void fill_struct(main_t *menu, game_t *game, character_t *charac, tower_t *tw);

void new_rect_side(character_t *charac);
void new_rect_front(character_t *charac);
void new_rect_back(character_t *charac);

void move_left(character_t *charac, game_t *game);
void move_down(character_t *charac);
void move_up(character_t *charac);

void create_slots(game_t *game);
void create_build_menu(game_t *game);
void create_button_main(main_t *menu);
void react_button_main(main_t *menu, game_t *game);
void create_button_pause(game_t *game);
void create_other_button_pause(game_t *game);
void react_button_pause(game_t *game);

void create_text_pause(game_t *game);
void create_text_game(game_t *game);
void create_text_main(main_t *menu);
char *trans_nb_to_char(int nb);

void check_mouse(game_t *game, tower_t *tw);
void check_mouse_pos(game_t *game, tower_t *tw);
void check_attack(game_t *game, character_t *chrc, tower_t *tw);

void draw_main(main_t *menu, game_t *game);
void draw_pause(game_t *game);
void draw_game(game_t *game);
void draw_enemy(game_t *game, character_t *charac, tower_t *tower);
void draw_tower(game_t *game, tower_t *tw);

void my_putchar(char c);
void my_putstr(char const *str);
int my_strcmp(char const *str1, char const *str2);
int my_strlen(char const *str);
char *my_revstr(char *str);

#define DEF "My Defender"
#define SUCCESS 0
#define ERROR 84

#define GAME 1
#define MAIN 2
#define END -1

#endif
