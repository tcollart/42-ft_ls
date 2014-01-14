# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcollart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/08 03:14:15 by tcollart          #+#    #+#              #
#    Updated: 2013/12/30 03:14:39 by tcollart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
NAME = ft_ls
SOURCES = ft_ls.c getters1.c getters2.c maxes.c modes.c counters.c \
		  bubble_sort.c sorting_algorithms.c printers.c

OBJECTS = ft_ls.o getters1.o getters2.o maxes.o modes.o counters.o \
		  bubble_sort.o sorting_algorithms.o printers.o

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SOURCES) libft/libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean

re: fclean all
