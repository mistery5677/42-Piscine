/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:53:59 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/07 13:43:18 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		nb--;
		while (nb > 0)
		{
			resultado = resultado * nb;
			nb--;
		}
		return (resultado);
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(5));
}*/