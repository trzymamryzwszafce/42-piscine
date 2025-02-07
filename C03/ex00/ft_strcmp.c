/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:47:23 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/08 19:25:50 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main() {
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "Hell";
    char *str4 = "Hello, World!";
    char *str5 = "Hella";

    printf("Comp \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comp \"%s\" and \"%s\": %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Comp \"%s\" and \"%s\": %d\n", str1, str4, ft_strcmp(str1, str4));
    printf("Comp \"%s\" and \"%s\": %d\n", str1, str5, ft_strcmp(str1, str5));

    return 0;
}*/
