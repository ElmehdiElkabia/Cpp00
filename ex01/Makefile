CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook 
SRC = main.cpp Contact/Contact.cpp PhoneBook/PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all