/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:38:16 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/07 22:59:52 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	printable_check;
	int	i;

	printable_check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
			printable_check = 0;
		i++;
	}
	return (printable_check);
}
