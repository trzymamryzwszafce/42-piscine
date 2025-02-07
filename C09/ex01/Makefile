# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 16:34:18 by szmadeja          #+#    #+#              #
#    Updated: 2024/12/02 17:32:27 by szmadeja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

# Defines where the source files are
SOURCES = srcs/ft_putchar.c scrs/ft_swap.c scrs/ft_putstr.c scrs/ft_strlen.c scrs/ft_strcmp.c

# Shortcut to do the same but with the object files
OBJECTS = $(SOURCES:c=o)

# Defines the compiler and its flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

all: $(NAME)

# Puts the .o files into a library
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Builds the .o files. $@ = target name
$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $(@:o=c) -o $@

# Deletes .o files
clean:
	rm -f $(OBJECTS)

# Deletes object files, then the output file
fclean: clean
	rm -f $(NAME)

# Rebuilds, so first deletes all then builds again
re: fclean all

# Tells Make that these commands don't build files with those names
.PHONY: all clean fclean re
