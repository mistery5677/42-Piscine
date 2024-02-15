/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:42:07 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/01 15:42:21 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_lenght(char *dest)
{
	int	counter;

	counter = 0;
	while (dest[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	lenght_dest;

	lenght_dest = str_lenght(dest);
	counter = 0;
	while (src[counter])
	{
		dest[lenght_dest] = src[counter];
		lenght_dest++;
		counter++;
	}
	dest[lenght_dest] = '\0';
	return (dest);
}

/*int main()
{
	char dest[] = "hello";
	char src[] = " world";
	char dest1[] = "hello";
	char src1[] = " world";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s", strcat(dest1, src1));
}*/