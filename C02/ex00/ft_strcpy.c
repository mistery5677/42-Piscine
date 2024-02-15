/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:33:58 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/31 07:51:24 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/*void ft_putstr(char *copy)
{
	int	counter;

	counter = 0;
	while(copy[counter])
	{
		write(1, &copy[counter], 1);
		counter++;
	}
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "Hello";
	char dest[100];

	ft_strcpy(dest, src);
	ft_putstr(dest);
}*/