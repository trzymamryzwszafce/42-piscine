/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:31:43 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/08 19:35:01 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Before strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After strcat: %s\n", dest);

    return 0;
}*/
