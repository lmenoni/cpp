# **************************************************************************** #
#                                    Makefile                                  #
# **************************************************************************** #

# Nome dell'eseguibile
NAME = convert

# Compilatore e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Sorgenti
SRC = main.cpp Utils.cpp

# Regola di default
all: $(NAME)

# Link e compilazione
$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

# Pulizia (opzionale, qui non ci sono oggetti ma utile se ne aggiungi)
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re