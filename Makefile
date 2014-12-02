# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2014/12/02 17:27:36 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c

OBJT= main.o

GCC= gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C mlx/ clean
	make -C mlx/
	$(GCC) $(SRCS) -I includes/ -I libft/includes/ \
		-framework OpenGL -framework AppKit -o $(NAME)

clean:
	rm -f $(OBJT)

fclean:
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean
