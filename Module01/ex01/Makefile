# -*- Makefile -*-

NAME = horde
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp ZombieHorde.cpp Zombie.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all