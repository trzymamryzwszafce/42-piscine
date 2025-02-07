/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:05:42 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/03 19:46:24 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*include <stdio.h>

int main()
{
	int	a;
	int	b;
	a = 4;
	b = 7;

	printf("%d\n", a);
        printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
