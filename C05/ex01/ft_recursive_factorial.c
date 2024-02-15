/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:54:31 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/07 13:45:26 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = nb;
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		nb--;
		if (nb > 1)
		{
			resultado = resultado * ft_recursive_factorial(nb);
		}
	}
	if (resultado < 1)
	{
		return (0);
	}
	return (resultado);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(-1));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(5));
}*/