/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:38:00 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/30 11:54:47 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (!((str[counter] >= 'a' && str[counter] <= 'z') 
				|| (str[counter] >= 'A' && str[counter] <= 'Z')))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/*int main()
{
	char	teste1[10] = "jds23";
	char	teste2[10] = "kmSAa";

	printf("%d %d", ft_str_is_alpha(teste1), ft_str_is_alpha(teste2));
}*/