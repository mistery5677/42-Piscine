/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:31:03 by miafonso          #+#    #+#             */
/*   Updated: 2024/02/15 08:02:38 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strs_len(char **strs)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

int	len_sep(char *spc)
{
	int	i;

	i = 0;
	while (spc[i])
	{
		i++;
	}
	return (i);
}

void	create_str(char *copy, char **str, char *sep)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			copy[x] = str[i][j];
			j++;
			x++;
		}
		j = 0;
		while (sep[j] && str[i + 1] != NULL)
		{
			copy[x] = sep[j];
			j++;
			x++;
		}
		i++;
	}
	copy[x] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		result;

	result = (strs_len(strs) + (len_sep(sep) * (size - 1)));
	if (size == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = malloc((result + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		create_str(str, strs, sep);
	return (str);
}

/*int	main(void)
{
	int size = 3;
	char sep[] = "ab";
	char **strs = {};
	printf("%s", ft_strjoin(size, strs, sep));
}*/