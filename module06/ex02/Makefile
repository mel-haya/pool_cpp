NAME = Identify
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Base.cpp

all: $(NAME)

$(NAME):$(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all
