/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:58:24 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:27 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0 || nb <= 1)
		return (0);
	return (1);
}

/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(14));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(16));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(18));
	printf("%d\n", ft_is_prime(19));
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(21));
	printf("%d\n", ft_is_prime(22));
	printf("%d\n", ft_is_prime(23));
	printf("%d\n", ft_is_prime(24));
	printf("%d\n", ft_is_prime(25));
	printf("%d\n", ft_is_prime(26));
	printf("%d\n", ft_is_prime(27));
	printf("%d\n", ft_is_prime(28));
	printf("%d\n", ft_is_prime(29));
	printf("%d\n", ft_is_prime(30));
	printf("%d\n", ft_is_prime(31));
	printf("%d\n", ft_is_prime(32));
	printf("%d\n", ft_is_prime(33));
	printf("%d\n", ft_is_prime(34));
	printf("%d\n", ft_is_prime(35));
	printf("%d\n", ft_is_prime(36));
	printf("%d\n", ft_is_prime(37));            
}*/