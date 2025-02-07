/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:38:29 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:32:39 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "values.h"

char	*get_value(char *num, t_value *values);
int		ft_atoi(char *str);
void	ft_putstrs(char *str, char *suffix);
int		ft_strlen(char *str);
char	*ft_strdup(char *str, int to);
char	*add_zeroes(char first, int zeroes);

/* Prints a single-digit number */
void	single_digit(char *num, t_value *values)
{
	char	*str;

	str = get_value(num, values);
	ft_putstrs(str, "\0");
}

/* Prints the number if it has 2 digits */
void	double_digit(char *num, t_value *values)
{
	int		numeric;
	char	*str;

	if ('0' == num[0])
		single_digit(&num[1], values);
	else
	{
		numeric = ft_atoi(num);
		if ((numeric > 9 && numeric < 21) || 0 == numeric % 10)
			ft_putstrs(get_value(num, values), "\0");
		else
		{
			str = add_zeroes(num[0], 1);
			ft_putstrs(get_value(str, values), "\0");
			free(str);
			if ('0' != num[1])
			{
				str = ft_strdup(&num[1], 1);
				ft_putstrs("-", get_value(str, values));
				free(str);
			}
		}
	}
}

/* Prints the number if it has 3 digits */
void	triple_digit(char *num, t_value *values)
{
	char	*str;
	char	*value;

	str = add_zeroes(num[0], 0);
	value = get_value(str, values);
	ft_putstrs(value, " ");
	free(str);
	value = get_value("100", values);
	ft_putstrs(value, "\0");
	if (!('0' == num[1] && '0' == num[2]))
	{
		ft_putstrs(" and ", "\0");
		double_digit(&num[1], values);
	}
}

/* Skips zeroes at the start of the number */
char	*get_start(char *num)
{
	if (1 == ft_strlen(num))
		return (num);
	if ('0' == num[0] && '0' == num[1] && '0' == num[2])
	{
		return ("\0");
	}
	if ('0' == num[0] && '0' == num[1])
	{
		return (&num[2]);
	}
	if ('0' == num[0])
	{
		return (&num[1]);
	}
	return (num);
}

/* Prints the digit group */
void	print_digits(char *num, t_value *values)
{
	int	len;

	num = get_start(num);
	len = ft_strlen(num);
	if (1 == len)
	{
		single_digit(num, values);
	}
	else if (2 == len)
	{
		double_digit(num, values);
	}
	else if (3 == len)
	{
		triple_digit(num, values);
	}
}
