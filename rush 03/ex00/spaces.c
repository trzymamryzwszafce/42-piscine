/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spaces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:50:51 by mmitkovi          #+#    #+#             */
/*   Updated: 2024/10/20 19:47:01 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Removes spaces at the end of the string */
void	ft_spc_end(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0 && str[i] == ' ')
	{
		str[i] = '\0';
		i--;
	}
}

/* Removes spaces at the front of the string  */
void	ft_spc_before(char *str)
{
	int	index;
	int	j;

	index = 0;
	j = 0;
	while (str[index] == ' ')
		index++;
	while (str[index] != '\0')
		str[j++] = str[index++];
	str[j] = '\0';
}

/* Counts the length of the string */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* Removes beginning, end and double spaces */
void	remove_spaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_spc_before(str);
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' && str[i + 1] == ' '))
		{
			str[j++] = str[i];
		}
		i++;
	}
	str[j] = '\0';
	ft_spc_end(str);
}
