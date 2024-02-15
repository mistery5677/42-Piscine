/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:31:17 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/05 10:31:48 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	count_minus(char *str)
{
	int	signal;
	int	i;

	i = skip_spaces(str);
	signal = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signal++;
		}
		i++;
	}
	return (signal);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = skip_spaces(str);
	nbr = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if (count_minus(str) % 2 != 0)
	{
		nbr *= -1;
	}
	return (nbr);
}

/*#include <stdio.h>

int main()
{
	char *teste;

	teste = "  --+-123";

	printf("%d", ft_atoi(teste));
}*/
