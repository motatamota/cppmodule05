NAME = ex00
FLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

