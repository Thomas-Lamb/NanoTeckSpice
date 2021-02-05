##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

NAME =	NanoTeckSpice

SRC	 =	src/main/main.cpp	\
		src/input_output/Input.cpp	\
		src/input_output/Output.cpp	\
		src/chipsets/Chipset.cpp	\
		src/chipsets/IComponent.cpp	\
		src/chipsets/Factory.cpp	\
		src/main/Components.cpp	\

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