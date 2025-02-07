/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:50:55 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/08 19:36:09 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
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
    char dest[20] = "Hello, "; // Ensure enough space for concatenation
    char src[] = "World!";

    // Append the first 3 characters of src to dest
    ft_strncat(dest, src, 3);

    // Print the result
    printf("Resulting string: %s\n", dest); // Output: "Hello, Wor"

    // Append the next 3 characters of src to dest
    ft_strncat(dest, src + 3, 3);

    // Print the result again
    printf("Resulting string after appending more: %s\n", dest); 

    return 0;
}*/
