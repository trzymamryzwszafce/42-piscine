/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:03:43 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 20:17:21 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_file(char *filename, char *num);
int		ft_strlen(char *str);
char	*skip_zeroes(char *num);

int	is_bad_num(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	if (0 == len || len > 39)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	use_default_dict(char *num)
{
	int	error;

	if (1 == is_bad_num(num))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	error = parse_file("numbers.dict", num);
	if (1 == error)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	return (0);
}

int	use_custom_dict(char *dict, char *num)
{
	int	error;

	if (1 == is_bad_num(num))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	error = parse_file(dict, num);
	if (1 == error)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	return (0);
}

int	use_kb(void)
{
	char	buffer[200];
	int		i;

	read(0, &buffer, 200);
	i = 0;
	while (buffer[i] && 10 != buffer[i])
		i++;
	buffer[i] = '\0';
	return (use_default_dict(skip_zeroes(buffer)));
}

int	main(int argc, char *argv[])
{
	if (1 == argc)
	{
		return (use_kb());
	}
	if (2 == argc)
	{
		return (use_default_dict(skip_zeroes(argv[1])));
	}
	if (3 == argc)
	{
		return (use_custom_dict(argv[1], skip_zeroes(argv[2])));
	}
	return (0);
}
