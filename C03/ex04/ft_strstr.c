/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:34:52 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/02 11:40:48 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	counter1;

	counter = 0;
	if (to_find[counter] == '\0')
	{
		return (str);
	}
	while (str[counter])
	{
		counter1 = 0;
		while (str[counter + counter1] == to_find[counter1])
		{
			if (to_find[counter1 + 1] == '\0')
			{
				return (str + counter);
			}
			counter1++;
		}
		counter++;
	}
	return (0);
}

/*int main()
{
	char str[] = "dffdgf";
	char tofind[] = "fd";

	printf("%s\n", ft_strstr(str, tofind));
	printf("%s\n", strstr(str, tofind));
}*/