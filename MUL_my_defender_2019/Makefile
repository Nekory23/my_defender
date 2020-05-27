##
## EPITECH PROJECT, 2020
## my_defender
## File description:
## makefile
##

NAME	=	my_defender

SRC	=	src/main.c		\
		src/display.c		\
		src/end_game.c		\
		src/react_button.c	\
		src/draw.c		\
		src/animations.c	\
		src/animations_bis.c	\
		src/move_enemy.c	\
		src/create_button.c	\
		src/create_slots.c	\
		src/create_text.c	\
		src/fill_struct.c	\
		src/help_functions.c	\
		src/check_mouse.c	\
		src/check_mouse_pos.c	\
		src/my_revstr.c		\
		src/attack.c		\
		src/destroy_all.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS=	-I./include/

LDFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system -lm

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
