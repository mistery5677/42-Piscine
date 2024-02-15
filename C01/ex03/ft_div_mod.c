/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:56:25 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/29 15:47:31 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

	//printf("%d\n", *div);
	//printf("%d\n", *mod);
/*int main()
{       
	int a;
	int b;
	int div[1] = {'0'};       
	int mod[1] = {'0'};


	a = 47;
	b = 2;
	ft_div_mod(a, b, div, mod);
}*/