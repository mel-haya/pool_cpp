# -*- Makefile -*-

NAME = a.out
FLAGS = -Wall -Werror -Wextra
SRC = ClapTrap.cpp main.cpp FragTrap.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all
