# **************************************************************************** #
#                                    Makefile                                  #
# **************************************************************************** #

# Nome dell'eseguibile
NAME = ex05

# Compilatore e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Sorgenti
SRC = main.cpp Harl.cpp

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