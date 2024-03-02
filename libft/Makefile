CC = gcc
CFLAGS = -Werror -Wextra -Wall
NAME = libft.a
SRC = ./*.c
OBJ = ./*.o

all:
	$(CC) $(CFLAGS) -O -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all