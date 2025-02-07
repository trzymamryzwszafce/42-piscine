/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:55:15 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/21 23:04:46 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;
	int		l;

	l = 0;
	while (sep[l])
		l++;
	s = malloc(sizeof(strs + (l * (size - 1))));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
