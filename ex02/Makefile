Name = a.out
SRCS = main.cpp Dog.cpp Cat.cpp AAnimal.cpp WrongAnimal.cpp WrongCat.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(Name)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:	
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re