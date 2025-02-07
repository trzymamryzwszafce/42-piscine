/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:54:01 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/17 18:23:59 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_size;

	i = 0;
	range_size = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(4 * (max - min));
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
		range_size++;
	}
	return (range_size);
}
