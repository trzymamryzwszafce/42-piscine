/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:26:21 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/07 22:59:16 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	lowercase_check;
	int	i;

	lowercase_check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			lowercase_check = 0;
		i++;
	}
	return (lowercase_check);
}
