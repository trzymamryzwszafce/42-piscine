/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:30:28 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/07 22:57:26 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alpha_check;
	int	i;

	alpha_check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			alpha_check = 0;
		i++;
	}
	return (alpha_check);
}
