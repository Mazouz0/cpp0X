NAME = account

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Account.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
