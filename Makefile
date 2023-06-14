##
## EPITECH PROJECT, 2023
## chash
## File description:
## Makefile
##

SRC		=		add_element.c	\
				get_elem.c		\
				get_index.c		\
				map_creation_and_destruction.c

OBJ		=		$(SRC:.c=.o)

NAME	=		libchash.a

all: $(OBJ)
		ar rc $(NAME) $(OBJ)
		mv $(NAME) ..
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../$(NAME)
