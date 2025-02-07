/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:37:45 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/16 20:24:40 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	new_str = malloc(1 * (i + 1));
	if (new_str == 0)
		return (0);
	while (src[j])
	{
		new_str[j] = src[j];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
