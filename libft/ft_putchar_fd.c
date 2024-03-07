#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

int main()
{
        int fd = open("fd.txt");
        ft_putchar_fd('c',  fd);
}