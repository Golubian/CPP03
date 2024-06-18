NAME = claptrap
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS = ClapTrap.cpp\
main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re