TARGET := zombie
CXX := c++
STD := -std=c++98
CFLAGS := -Wall -Wextra -Werror $(STD)
RM := rm -rf 
SRC := $(wildcard *.cpp)
OBJ := $(SRC:%.cpp=%.o)
all: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(TARGET)
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $^ -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(TARGET)
re: fclean all
.PHONY: all clean fclean re