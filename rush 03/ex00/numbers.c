/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:18:23 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:34:06 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "values.h"

char	*get_value(char *num, t_value *values);
int		ft_strlen(char *str);
char	*ft_strdup(char *str, int to);
int		print_digits(char *num, t_value *values);
void	ft_putstrs(char *str, char *suffix);
char	*add_zeroes(char first, int zeroes);

/* Prints a groups of 3 digits */
void	print_group(char *num, int group, t_value *values)
{
	char	*power;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (num[i])
	{
		if ('0' != num[i])
			count++;
		i++;
	}
	if (0 == count && ft_strlen(num) > 1)
		return ;
	if (group > 0)
	{
		power = add_zeroes('1', 3 * group);
		print_digits(num, values);
		write(1, " ", 1);
		ft_putstrs(get_value(power, values), "\0");
		write(1, " ", 1);
		free(power);
	}
	else
		print_digits(num, values);
}

/* Splits the number into groups of 3 */
void	split_num(char *num, t_value *values)
{
	int		count;
	int		groups;
	int		remainder;
	char	*split_num;
	int		i;

	i = 1;
	count = ft_strlen(num);
	groups = count / 3;
	remainder = count % 3;
	if (remainder > 0)
	{
		split_num = ft_strdup(num, remainder - 1);
		print_group(split_num, groups, values);
		free(split_num);
	}
	while (i <= groups)
	{
		split_num = ft_strdup(&num[remainder + (3 * (i - 1))], 2);
		print_group(split_num, (groups - i), values);
		free(split_num);
		i++;
	}
}

/* This is the function that starts off the printing */
int	print_number(char *num, t_value *values)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (num[i])
	{
		if ('0' != num[i])
			count++;
		i++;
	}
	if (0 == count)
		split_num(num, values);
	else
		split_num(num, values);
	write(1, "\n", 1);
	return (0);
}
