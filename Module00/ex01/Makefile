# -*- Makefile -*-

NAME = phonebook
FLAGS = -Wall -Werror -Wextra
SRC = phonebook.cpp contact.cpp main.cpp

all: $(NAME)

$(NAME):
	g++ --std=c++98 $(SRC) $(FLAGS) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all