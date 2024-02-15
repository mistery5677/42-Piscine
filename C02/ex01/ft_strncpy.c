/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:08:36 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/31 07:52:27 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <unistd.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	counter;
	int	size;

	size = n;
	counter = 0;
	while (counter < size && src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < size)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

/*int	main(void)
{	
	char	dest[10] = "";
	char	src[10] = "123";

	printf("%s\n\n\n", strncpy(dest, src, 5)); //library
	printf("%s\n", ft_strncpy(dest, src, 5)); //meu
}*/