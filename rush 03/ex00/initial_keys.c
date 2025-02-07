/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_keys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:40:39 by lwillis           #+#    #+#             */
/*   Updated: 2024/10/20 13:15:58 by lwillis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* Returns an array of the first third of the keys */
char	**get_first_keys(void)
{
	char	**keys;

	keys = malloc(sizeof(char *) * 15);
	if (!keys)
	{
		return (NULL);
	}
	keys[0] = "0";
	keys[1] = "1";
	keys[2] = "2";
	keys[3] = "3";
	keys[4] = "4";
	keys[5] = "5";
	keys[6] = "6";
	keys[7] = "7";
	keys[8] = "8";
	keys[9] = "9";
	keys[10] = "10";
	keys[11] = "11";
	keys[12] = "12";
	keys[13] = "13";
	keys[14] = NULL;
	return (keys);
}

/* Returns an array of the second third of the keys */
char	**get_second_keys(void)
{
	char	**keys;

	keys = malloc(sizeof(char *) * 15);
	if (!keys)
	{
		return (NULL);
	}
	keys[0] = "14";
	keys[1] = "15";
	keys[2] = "16";
	keys[3] = "17";
	keys[4] = "18";
	keys[5] = "19";
	keys[6] = "20";
	keys[7] = "30";
	keys[8] = "40";
	keys[9] = "50";
	keys[10] = "60";
	keys[11] = "70";
	keys[12] = "80";
	keys[13] = "90";
	keys[14] = NULL;
	return (keys);
}

/* Returns an array of the last third of the keys */
char	**get_third_keys(void)
{
	char	**keys;

	keys = malloc(sizeof(char *) * 14);
	if (!keys)
	{
		return (NULL);
	}
	keys[0] = "100";
	keys[1] = "1000";
	keys[2] = "1000000";
	keys[3] = "1000000000";
	keys[4] = "1000000000000";
	keys[5] = "1000000000000000";
	keys[6] = "1000000000000000000";
	keys[7] = "1000000000000000000000";
	keys[8] = "1000000000000000000000000";
	keys[9] = "1000000000000000000000000000";
	keys[10] = "1000000000000000000000000000000";
	keys[11] = "1000000000000000000000000000000000";
	keys[12] = "1000000000000000000000000000000000000";
	keys[13] = NULL;
	return (keys);
}
