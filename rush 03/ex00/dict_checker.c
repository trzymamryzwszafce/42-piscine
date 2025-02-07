/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:21:56 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:43:40 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "values.h"

char	*get_value(char *num, t_value *values);
char	**get_first_keys(void);
char	**get_second_keys(void);
char	**get_third_keys(void);

/* Checks that the dict has a required num */
int	contains_key(char *num, t_value *values)
{
	char	*value;

	value = get_value(num, values);
	if (value)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* Checks whether all the required keys (divided into 3) are in the dict */
int	contains_initial_keys(char **keys, t_value *values)
{
	int	i;

	if (NULL == keys)
	{
		return (0);
	}
	i = 0;
	while (keys[i])
	{
		if (0 == contains_key(keys[i], values))
		{
			free(keys);
			return (0);
		}
		i++;
	}
	free(keys);
	return (1);
}

/* Checks if the dict has all the required keys */
int	is_valid_dict(t_value *values)
{
	int	count;

	count = 0;
	count += contains_initial_keys(get_first_keys(), values);
	count += contains_initial_keys(get_second_keys(), values);
	count += contains_initial_keys(get_third_keys(), values);
	if (count < 3)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
