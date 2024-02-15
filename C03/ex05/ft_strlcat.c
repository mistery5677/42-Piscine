/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:56:05 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/14 09:41:59 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	max_dest;
	unsigned int	max_src;

	counter = 0;
	max_dest = str_lenght(dest);
	max_src = str_lenght(src);
	if (max_dest >= size - 1)
	{
		return (max_src);
	}
	while (max_dest + counter < size - 1)
	{
		dest[max_dest + counter] = src[counter];
		counter++;
	}
	dest[max_dest + counter] = '\0';
	return (max_dest + max_src);
}

/*int main()      
{
	char dest[] = "abcccccdd";
	char src[] = "cd83221312";

	printf("%d", ft_strlcat(dest, src, 3));
}*/
