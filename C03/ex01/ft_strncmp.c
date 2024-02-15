/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:15:11 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/03 08:20:22 by miafonso         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	counter;
	int	bytes;

	bytes = n;
	counter = 0;
	if (bytes < 0)
	{
		return (ft_strcmp(s1, s2));
	}
	while ((s1[counter] || s2[counter]) && counter < bytes)
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
		counter++;
	}
	return (0);
}

/*int main()
{
	char teste[10] = "1";
	char teste1[10] = "";

	printf("%d ", ft_strncmp(teste, teste1, 0));
	printf("%d\n", strncmp(teste, teste1, 0	));
}*/