/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:39:48 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/31 08:01:02 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*all_low(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	all_low(str);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (!((str[counter - 1] >= 'A' && str[counter - 1] <= 'Z') 
					|| (str[counter - 1] >= 'a' && str[counter - 1] <= 'z')
					|| (str[counter - 1] >= '0' && str[counter - 1] <= '9')))
			{
				str[counter] -= 32;
			}
		}
		counter++;
	}
	return (str);
}

/*int main()
{
	char    teste[20] = "!HEL4d-a LO";
	printf("%s", ft_strcapitalize(teste));
}*/