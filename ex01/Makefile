SRCS = PhoneBook.cpp Contact.cpp main.cpp
NAME = phonebook
CC = c++ -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}
HEADERS = PhoneBook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CC) -c $< -o $@	

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean