NAME = fixed

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = Fixed.hpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean