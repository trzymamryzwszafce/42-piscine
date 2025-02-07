/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:33:56 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 19:59:36 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);

/* Writes a string with an optional second string at the end */
void	ft_putstrs(char *str, char *suffix)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (suffix[i])
	{
		write(1, &suffix[i], 1);
		i++;
	}
}

/* Checks if two strings are the same */
int	compare_strs(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* Gets either the num or the value to fill the dict  */
char	*get_split(char *str, int start, int end)
{
	int		i;
	char	*out;

	if (-1 == end)
		end = ft_strlen(str);
	out = malloc(sizeof(char) * ((end - start) + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[start] && start < end)
	{
		out[i] = str[start];
		i++;
		start++;
	}
	out[i] = '\0';
	return (out);
}

/* Copies one str to another, up to a certain point */
char	*ft_strcpy(char *dest, char *src, int to)
{
	int	i;

	i = 0;
	while (src[i] && i < to)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/* Duplicates a string, up to a certain point  */
char	*ft_strdup(char *src, int to)
{
	int		len;
	char	*ptr;

	len = to;
	ptr = malloc((len + 1) * sizeof(char *));
	ft_strcpy(ptr, src, to);
	ptr[len + 1] = '\0';
	return (ptr);
}
