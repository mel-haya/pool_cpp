NAME = Serialize
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp Data.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo cleaning...

fclean: clean
	rm -f $(NAME)

re: fclean all
