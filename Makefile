##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

NAME =	NanoTeckSpice

SRC	 =	src/main/main.cpp	\
		src/shell/Shell.cpp	\
		src/parsing/Parsing.cpp	\

OBJS		=	$(SRC:.cpp=.o)

CFLAGS		=	-g3 -Wall -Wextra -Werror

all:	$(OBJS)
	g++ -o $(NAME) $(OBJS)
	make clean

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all