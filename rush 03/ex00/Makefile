# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwillis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 12:09:19 by lwillis           #+#    #+#              #
#    Updated: 2024/10/20 20:17:47 by lwillis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

# Defines where the source files are
SOURCES = ./main.c ./files.c ./numbers.c ./str_utils.c ./values.c ./spaces.c ./dict_checker.c ./initial_keys.c ./num_gen.c ./utils.c

# Shortcut to do the same but with the object files
OBJECTS = $(SOURCES:c=o)

# Defines the compiler and its flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

# Puts the .o files into a library
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

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
