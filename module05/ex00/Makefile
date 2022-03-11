
NAME = a.out
FLAGS = -Wall -Werror -Wextra
SRC = Bureaucrat.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all
