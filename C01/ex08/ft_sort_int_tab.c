/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:30:15 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/30 11:32:49 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void print_array(int *arr)
{
	int counter;

	counter = 0;
	while(arr[counter])
	{
		write(1, &arr[counter], 1);
		counter++;
	}
}*/

void	ft_swap(int *tab, int actual, int next)
{
	int	copy_actual;

	copy_actual = tab[actual];
	tab[actual] = tab[next];
	tab[next] = copy_actual;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	counter1;

	counter = 0;
	while (tab[counter])
	{
		counter1 = counter + 1;
		while (counter1 < size)
		{
			if (tab[counter] > tab[counter1])
			{
				ft_swap (tab, counter, counter1);
			}
			counter1++;
		}
		counter++;
	}
}

	//print_array(tab);
/*int main()
{
	int tab[7] = {'1', '3', '2', '9', '4', '2', '7'};
	int size = 7;

	ft_sort_int_tab(tab, size);
}*/