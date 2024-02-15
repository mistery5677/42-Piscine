/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:40:20 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/13 10:40:21 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size(int min, int max)
{
	unsigned int	result;

	result = max - min;
	return (result);
}

int	*ft_range(int min, int max)
{
	int				*range;
	int				len;
	unsigned int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = size(min, max);
	range = malloc(len * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*#include <stdio.h>
int	main(void)
{
	int *range;
	int i;

	i = 0;
	range = ft_range(0, 500);
	printf("%d", range[45]);
	free(range);
}*/

// 2147483647
