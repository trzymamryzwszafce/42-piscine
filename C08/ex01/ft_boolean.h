/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 03:04:39 by szmadeja          #+#    #+#             */
/*   Updated: 2024/10/22 04:04:46 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(n) n % 2 == 0
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

typedef int	t_bool;

#endif
