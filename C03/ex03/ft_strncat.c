/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:49:55 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/03 08:22:36 by miafonso         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	max_dest;

	counter = 0;
	max_dest = str_lenght(dest);
	while (src[counter] && counter < nb)
	{
		dest[max_dest] = src[counter];
		max_dest++;
		counter++;
	}
	dest[max_dest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[] = "hello";
	char src[] = " world";
	char dest1[] = "hello";
	char src1[] = " world";
	printf("%s\n", ft_strncat(dest, src, 10));
	printf("%s", strncat(dest1, src1, 10));
}*/