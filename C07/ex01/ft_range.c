/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:25:49 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/14 18:04:14 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
		return (0);
	arr = malloc(4 * (max - min));
	if (arr == 0)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
