/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:08:37 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:37:09 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "values.h"

void	str_to_lines(char *str, char **lines);
void	lines_to_values(char **lines, t_value *values);
int		is_valid_dict(t_value *values);
void	print_number(char *num, t_value *values);

/* Counts the characters in a file */
int	count_file(char *filename)
{
	int		file;
	int		read_byte;
	char	buffer;
	int		count;

	file = open(filename, O_RDONLY);
	if (-1 == file)
		return (-1);
	read_byte = read(file, &buffer, 1);
	count = 0;
	while (read_byte)
	{
		if (-1 == read_byte)
			return (-1);
		count++;
		read_byte = read(file, &buffer, 1);
	}
	return (count);
}

/* Counts the number of newlines in the string */
int	count_lines(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ('\n' == str[i])
		{
			count++;
		}
		i++;
	}
	return (count);
}

/* Converts the dict file into one long string */
int	file_to_str(char *filename, char *str)
{
	int		file;
	int		read_byte;
	char	buffer;
	int		i;

	i = 0;
	file = open(filename, O_RDONLY);
	if (-1 == file)
		return (-1);
	read_byte = read(file, &buffer, 1);
	while (read_byte)
	{
		if (-1 == read_byte)
			return (-1);
		str[i] = buffer;
		i++;
		read_byte = read(file, &buffer, 1);
	}
	close(file);
	str[i] = '\0';
	return (0);
}

void	free_all(char *file_str, char **lines, t_value *values)
{
	int	i;

	free(file_str);
	i = 0;
	while (lines[i])
	{
		free(lines[i]);
		i++;
	}
	free(lines);
	i = 0;
	while (values[i].num)
	{
		free(values[i].num);
		free(values[i].value);
		i++;
	}
	free(values);
}

/* Reads a file into an array of t_values */
int	parse_file(char *filename, char *num)
{
	char	*file_str;
	int		count;
	char	**lines;
	t_value	*values;

	count = count_file(filename);
	file_str = malloc(sizeof(char) * (count + 1));
	file_to_str(filename, file_str);
	count = count_lines(file_str);
	lines = malloc(sizeof(char *) * (count + 1));
	str_to_lines(file_str, lines);
	values = malloc(sizeof(t_value) * (count + 1));
	lines_to_values(lines, values);
	if (0 == is_valid_dict(values))
	{
		free_all(file_str, lines, values);
		return (1);
	}
	print_number(num, values);
	free_all(file_str, lines, values);
	return (0);
}
