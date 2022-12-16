NAME=ex03
CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -f

FILES=AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
HEADERS=AMateria.hpp Cure.hpp IMateriaSource.hpp MateriaSource.hpp Character.hpp ICharacter.hpp Ice.hpp

OBJ=$(FILES:%.cpp=%.o)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: make all clean fclean re
