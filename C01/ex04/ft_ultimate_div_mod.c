/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:06:21 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/29 15:48:12 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	swap_value(int div, int resto, int *a, int *b)
{
	*a = div;
	*b = resto;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_resto;

	temp_div = *a / *b;
	temp_resto = *a % *b;
	swap_value (temp_div, temp_resto, a, b);
}

/*int main()
{
	int a[1] = {47};
	int b[1] = {2};

	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);
}*/