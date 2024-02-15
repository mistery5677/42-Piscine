/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:15:37 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/31 10:09:23 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	counter;
	int	length;
	int	max;

	max = size;
	counter = 0;
	while (src[length])
	{
		src[length];
		length++;
	}
	while (counter < (max - 1) && src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (length);
}

/*int main()
{
	char dest[10] = "hello";
	char src[10] = "world";
	unsigned int teste = 2;

	ft_strlcpy(dest,src,teste);
	printf("%d\n", ft_strlcpy(dest, src, teste));
	printf("%s", dest);
}*/