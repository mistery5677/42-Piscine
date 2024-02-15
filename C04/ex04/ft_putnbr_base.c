/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:32:20 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/05 10:34:00 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_errors(char *base)
{
	int	counter;
	int	counter2;

	counter = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[counter])
	{
		if (!(base[counter] >= 32 && base[counter] <= 126))
			return (1);
		else if (base[counter] == '+' || base[counter] == '-')
			return (1);
		counter2 = counter + 1;
		while (base[counter] != base[counter2])
		{
			if (base[counter] == base[counter2])
				return (1);
			counter2++;
		}
		counter++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	resultado[100];

	i = 0;
	if (check_errors(base) == 0)
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			nbr *= -1;
		}
		while (nbr > 0)
		{
			resultado[i] = nbr % ft_strlen(base);
			nbr = nbr / ft_strlen(base);
			i++;
		}
		while (i > 0)
		{
			i--;
			ft_putchar (base[resultado[i]]);
		}
	}
}

/*int main()
{
	int nbr = 5;
	char *base;

	base = "01";
	ft_putnbr_base(nbr, base);
}*/