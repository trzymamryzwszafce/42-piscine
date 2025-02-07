/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:39:57 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/24 20:24:09 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	mu;

	i = 0;
	nbr = 0;
	mu = 1;
	while (str[i] < 33 || str[i] > 126)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mu *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	nbr *= mu;
	return (nbr);
}

int main()
{
    char input[100];

    printf("Enter a number: ");
    fgets(input, sizeof(input), stdin); // Read input from user

    int result = ft_atoi(input);
    printf("Converted integer: %d\n", result);

    return 0;
}
