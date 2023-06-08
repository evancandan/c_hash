##
## EPITECH PROJECT, 2023
## chash
## File description:
## Makefile
##

SRC		=		chash.c

OBJ		=		$(SRC:.c=.o)

NAME	=		chash.a

all: $(OBJ)
		ar rc $(NAME) $(OBJ)
		mv $(NAME) ..
clean:
	rm -f $(OBJ)

fclean:
	rm -f ../$(NAME)
