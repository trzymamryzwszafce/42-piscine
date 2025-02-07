/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:35:09 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/03 19:49:19 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*#include <stdio.h>

int main()
{
	int a, b;
	a = 10;
	b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
