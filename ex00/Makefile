SRCS = megaphone.cpp
NAME = megaphone
CC = c++ -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean