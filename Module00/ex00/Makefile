# -*- Makefile -*-

NAME = megaphone
FLAGS = -Wall -Werror -Wextra
SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	clang++ $(SRC) $(FLAGS) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all