#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-21", 3);
		write(1, "47483648", 8);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
}

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;    
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 1;
    while(par[i].str)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    t_stock_str *arr = ft_strs_to_tab(argc, argv);
    ft_show_tab(arr);
    free(arr);
}