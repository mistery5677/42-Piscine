/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:25:38 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/29 19:19:08 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(int *c)
{
	int	counter ;

	counter = 0;
	while (c[counter])
	{
		write (1, &c[counter], 1);
		counter++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_actual;
	int	counter;
	int	last_place;

	last_place = size - 1;
	counter = 0;
	while (counter < size / 2)
	{
		temp_actual = tab[counter];
		tab[counter] = tab[last_place];
		tab[last_place] = temp_actual;
		counter++;
		last_place--;
	}
}

/*int	main()
{
	int	size;
	int arr[5] = {'1', '2', '3', '4','5'};
	
	size = 5;
	ft_rev_int_tab(arr, size);
	ft_putchar(arr);
}*/