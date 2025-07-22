TARGET := harlFilter
CXX := c++
STD := -std=c++98
RM := rm -rf
CFLAGS := -Wall -Wextra -Werror $(STD)
SRC := $(wildcard *.cpp)
OBJ := $(SRC:%.cpp=%.o)
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(TARGET)
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(TARGET)
re: fclean all
.PHONY: all clean fclean re 
