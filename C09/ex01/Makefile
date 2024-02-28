OBJDIR = ./src/
HDIR = ./includes/
FLAGS = -Wall -Wextra -Werror

all: 
	gcc $(FLAGS) -c ./src/*.c
	ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o $(HDIR)*.h
	ranlib libft.a
	mv *.o $(OBJDIR)

clean:
	rm $(OBJDIR)*.o

fclean: clean
	rm libft.a

re: fclean all