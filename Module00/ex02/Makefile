# -*- Makefile -*-

NAME = a.out
FLAGS = -Wall -Werror -Wextra
SRC = tests.cpp Account.cpp

all: $(NAME)

$(NAME):
	clang++ $(SRC) $(FLAGS) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all