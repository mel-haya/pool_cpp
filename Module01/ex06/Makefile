# -*- Makefile -*-

NAME = karenFilter
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp karen.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all