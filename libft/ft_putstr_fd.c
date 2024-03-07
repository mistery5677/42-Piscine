#include "libft.h"
#include <stdio.h>
void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main()
{
    printf("TESTING FT_PUTSTR_FD \n\n");
    int fd_putstr = open("fd_putstr.txt", O_CREAT | S_IRWXU | O_WRONLY | O_APPEND);
    if (fd_putstr == -1) 
    {
        perror("open");
        return 1;
    }
    else
        printf("ficheiro criado com sucesso");
    ft_putstr_fd("hello", fd_putstr);
}