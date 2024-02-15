/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:15:29 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/31 09:53:21 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}

/*int main()
{
	char	teste[10] = "HellOs09P";
	printf("%s", ft_strupcase(teste));
}*/