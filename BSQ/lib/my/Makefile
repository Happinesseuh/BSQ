##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

FOLDER1	=	libmy.a

SRC = 	./my_strcmp.c\
	./my_strlowcase.c\
	./my_swap.c\
	./my_strncmp.c\
	./my_str_isupper.c\
	./my_strstr.c\
	./my_showmem.c\
	./my_strncpy.c\
	./my_strcpy.c\
	./my_strupcase.c\
	./my_putchar.c\
	./my_revstr.c\
	./my_strncat.c\
	./my_str_isalpha.c\
	./my_sort_int_array.c\
	./my_strlen.c\
	./my_find_prime_sup.c\
	./my_strcat.c\
	./my_is_prime.c\
	./my_strcapitalize.c\
	./my_getnbr.c\
	./my_str_isnum.c\
	./my_compute_square_root.c\
	./my_showstr.c\
	./my_putstr.c\
	./my_str_islower.c\
	./my_str_isprintable.c\
	./my_put_nbr.c\
	./my_compute_power_rec.c\
	./my_isneg.c\


OBJ	=	$(SRC:.c=.o)

LIBMY	=	lib/my

all:	compilib clean

re:	fclean compilib clean

compilib:	$(OBJ)
		ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	#clean
	rm -f $(FOLDER1)

runtest:
		gcc -o unit_tests tests/test_lib.c --coverage -lcriterion -L./lib/my -lmy
