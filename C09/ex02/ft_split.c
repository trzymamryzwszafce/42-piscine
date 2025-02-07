/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:04:44 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/24 20:35:44 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *separators)
{
	int	i;

	i = 0;
	while (separators[i])
	{
		if (separators[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*make_word(char *str, char *separators)
{
	int		i;
	char	*new_word;

	i = 0;
	while (str[i] && 0 == is_separator(str[i], separators))
		i++;
	new_word = malloc((i + 1) * sizeof(char));
	if (!new_word)
		return (NULL);
	i = 0;
	while (str[i] && 0 == is_separator(str[i], separators))
	{
		new_word[i] = str[i];
		i++;
	}
	new_word[i] = '\0';
	return (new_word);
}

int	count_words(char *str, char *separators)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (0 == is_separator(str[i], separators))
		{
			count++;
			while (str[i] && 0 == is_separator(str[i], separators))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	words = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (NULL == words || NULL == str || NULL == charset)
		return (NULL);
	i = 0;
	j = -1;
	while (str[i])
	{
		if (0 == is_separator(str[i], charset))
		{
			words[++j] = make_word(&str[i], charset);
			if (NULL == words[j])
				return (NULL);
			while (str[i] && 0 == is_separator(str[i], charset))
				i++;
		}
		else
			i++;
	}
	words[++j] = 0;
	return (words);
}
/*
int	main(void)
{
	int		i;
	char	**words;

	i = 0;
	words = ft_split(".Sentence to.be/split*into@words", "./*@! ");
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
}*/
