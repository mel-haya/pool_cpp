# -*- Makefile -*-

NAME = a.out
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) 

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all