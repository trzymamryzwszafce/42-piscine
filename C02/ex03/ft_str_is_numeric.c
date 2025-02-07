/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:22:58 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/07 22:58:07 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numeric_check;
	int	i;

	numeric_check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			numeric_check = 0;
		i++;
	}
	return (numeric_check);
}
