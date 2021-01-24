##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for project BSQ
##

SRC	=	./sources/find_square.c\
		./sources/my_show_int_array.c\
		./sources/my_intlen.c\
		./sources/my_show_word_array.c\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq


all:	libcreate compile clean libclean

libcreate:
	make -C lib/my all

compile:	$(OBJ)
	gcc $(OBJ) -o $(NAME) -L./lib/my -lmy -g -Wall -Wextra

libclean:
	make -C ./lib/my clean

libfclean:
	make -C ./lib/my fclean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean compile
