/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:07:58 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/03 19:47:26 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int main()
{
	int	a, b, div, mod;
	a = 5;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}*/
