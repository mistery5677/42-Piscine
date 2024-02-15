/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:57:41 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:56 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	power;
	int	multiply;

	power = 1;
	multiply = 1;
	if (nb == 1)
		return (1);
	while (power < nb)
	{
		power = multiply * multiply;
		if (multiply > 46340)
			return (0);
		multiply++;
	}
	if (power == nb)
		return (multiply - 1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(924895435));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(-305823432));
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));
}*/