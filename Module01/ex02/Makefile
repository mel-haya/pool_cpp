# -*- Makefile -*-

NAME = a.out
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all