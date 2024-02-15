/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:40:33 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/13 18:10:25 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size(int min, int max)
{
	unsigned int	result;

	result = max - min;
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	len = size(min, max);
	range[0] = malloc(len * sizeof(int));
	if (range == NULL)
		return (-1);
	while (i < len)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int *arr	;
	int range;
	int i;

	i = 0;
	range = ft_ultimate_range(&arr, 0, 100);
	printf("%d\n", range);
	printf("%d", arr[29]);
}