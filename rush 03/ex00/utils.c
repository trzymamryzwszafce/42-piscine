/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:04:45 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:42:07 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

/* Turns 1 into 100, 1000, etc. */
char	*add_zeroes(char first, int zeroes)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * (zeroes + 2));
	str[0] = first;
	i = 1;
	while (i <= zeroes)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* Converts a string into an int */
int	ft_atoi(char *str)
{
	int	i;
	int	number;

	number = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}

/* Turns 000000 into 0 */
char	*skip_zeroes(char *num)
{
	int	i;
	int	length;

	length = ft_strlen(num);
	i = 0;
	while (num[i] && '0' == num[i])
	{
		i++;
	}
	if (length > 0 && length == i)
	{
		return (&num[i - 1]);
	}
	return (&num[i]);
}
