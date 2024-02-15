/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:56:33 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/07 14:01:36 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	power--;
	if (power >= 1)
	{
		resultado = resultado * ft_recursive_power(nb, power);
	}
	return (resultado);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(-3, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(3, -1));
	printf("%d\n", ft_recursive_power(3, 3));
}*/