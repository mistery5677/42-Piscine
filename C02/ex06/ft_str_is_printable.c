/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:38:16 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/31 10:08:59 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] < 32 || str[counter] > 126)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/*int main()
{
	char	teste1[10] = "jds 23";
	char	teste2[10] = "kmS~Aa";

	printf("%d %d", ft_str_is_printable(teste1), ft_str_is_printable
	(teste2));
}*/