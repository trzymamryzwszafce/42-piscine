/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:29:54 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/07 22:59:35 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	uppercase_check;
	int	i;

	uppercase_check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			uppercase_check = 0;
		i++;
	}
	return (uppercase_check);
}
