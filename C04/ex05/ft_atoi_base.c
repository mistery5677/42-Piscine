/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:09:22 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/15 11:26:14 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_errors(char *base)
{
	int	counter;
	int	counter2;

	counter = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[counter])
	{
		if (!(base[counter] > 32 && base[counter] <= 126))
			return (1);
		else if (base[counter] == '+' || base[counter] == '-')
			return (1);
		counter2 = counter + 1;
		while (base[counter2])
		{
			if (base[counter] == base[counter2])
				return (1);
			counter2++;
		}
		counter++;
	}
	return (0);
}

char	*skip_spaces(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (str + i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_char(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j] != c && base[j])
	{
		j++;
		if (base[j] == '\0')
			return (j + 2);
	}
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int			len_base;
	int			i;
	long int	nbr_final;
	int			signal;

	signal = 1;
	nbr_final = 0;
	i = 0;
	len_base = ft_strlen(base);
	if (check_errors(base) == 0)
	{
		str = skip_spaces(str);
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signal *= -1;
			i++;
		}
		while (find_char(str[i], base) < len_base)
		{
			nbr_final = (nbr_final * len_base) + (find_char(str[i], base));
			i++;
		}
	}
	return (nbr_final * signal);
}

/*#include <stdio.h>

int	main(void)
{
	char *str = "   -FF";
	char *base = "0123456789ABCDEF";
	// char *clean = ft_strfinal(str, base);
	printf("%d\n", ft_atoi_base(str, base));
}*/