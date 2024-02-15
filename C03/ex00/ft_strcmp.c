/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:57:44 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/02 09:25:38 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] == s2[counter])
	{
		counter++;
		if (s1[counter] == '\0' && s2[counter] == '\0')
		{
			return (0);
		}
	}
	return ((s1[counter] - s2[counter]));
}

/*int main()
{
	char s1[10] = "heab";
	char s2[10] = "hee";

	printf("%d ", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
}*/