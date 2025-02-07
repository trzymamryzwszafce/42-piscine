/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:23:44 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/08 19:30:42 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] && s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main() {
    char *str1 = "Hello, World!";
    char *str2 = "Hello, World!";
    char *str3 = "Hello,";
    char *str4 = "Hello, everyone!";
    char *str5 = "Hell";

    printf("C \"%s\" and \"%s\" %d\n", str1, str2, ft_strncmp(str1, str2, 5)); 
    printf("C \"%s\" and \"%s\" %d\n", str1, str3, ft_strncmp(str1, str3, 5)); 
    printf("C \"%s\" and \"%s\" %d\n", str1, str4, ft_strncmp(str1, str4, 7)); 
    printf("C \"%s\" and \"%s\" %d\n", str1, str5, ft_strncmp(str1, str5, 5)); 
    printf("C \"%s\" and \"%s\" %d\n", str1, str4, ft_strncmp(str1, str4, 10)); 

    return 0;
}*/
