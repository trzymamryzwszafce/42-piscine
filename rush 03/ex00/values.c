/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   values.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:17:14 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:38:52 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "values.h"

char	*get_split(char *str, int start, int end);
int		compare_strs(char *s1, char *s2);
void	remove_spaces(char *str);

/* Finds the value for the given number */
char	*get_value(char *num, t_value *values)
{
	int	i;

	i = 0;
	while (values[i].num)
	{
		if (0 == compare_strs(num, values[i].num))
		{
			return (values[i].value);
		}
		i++;
	}
	return (NULL);
}

/* Splits a line into the number and text parts */
char	*split_line(char *str, int start, int end)
{
	int		i;
	char	*line;

	line = malloc(sizeof(char) * ((end - start) + 1));
	i = 0;
	while (start < end)
	{
		line[i] = str[start];
		i++;
		start++;
	}
	line[i] = '\0';
	return (line);
}

/* Splits the string by newlines */
void	str_to_lines(char *str, char **lines)
{
	int		i;
	int		count;
	int		from;
	char	*line;

	i = 0;
	count = 0;
	from = 0;
	while (str[i])
	{
		if ('\n' == str[i])
		{
			line = split_line(str, from, i);
			lines[count] = line;
			count++;
			from = i + 1;
		}
		i++;
	}
	lines[count] = NULL;
}

/* Converts a line from the file to a t_value */
t_value	line_to_value(char *line)
{
	int		i;
	int		colon_pos;
	t_value	value;

	i = 0;
	colon_pos = 0;
	while (line[i])
	{
		if (':' == line[i])
		{
			colon_pos = i;
			break ;
		}
		i++;
	}
	value.num = get_split(line, 0, colon_pos);
	remove_spaces(value.num);
	value.value = get_split(line, colon_pos + 1, -1);
	remove_spaces(value.value);
	return (value);
}

/* Converts all the lines in a file to a collection of t_values */
void	lines_to_values(char **lines, t_value *values)
{
	int	i;

	i = 0;
	while (lines[i])
	{
		values[i] = line_to_value(lines[i]);
		i++;
	}
	values[i].num = NULL;
}
