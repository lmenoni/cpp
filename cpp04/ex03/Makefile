# **************************************************************************** #
#                                    Makefile                                  #
# **************************************************************************** #

# Nome dell'eseguibile
NAME = ex03

# Compilatore e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Sorgenti
SRC = main.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp MateriaSource.cpp

# Variabile per debug
DEBUG ?= 0

ifeq ($(DEBUG),1)
    CXXFLAGS += -DDEBUG=1
else
    CXXFLAGS += -DDEBUG=0
endif

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

# Compilazione con debug
debug:
	$(MAKE) DEBUG=1 re

.PHONY: all clean fclean re