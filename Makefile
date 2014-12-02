# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2014/12/02 17:55:37 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c

OBJT= main.o

GCC= gcc

all: $(NAME)

$(NAME):
	make -C mlx/ clean
	make -C mlx/
	make -C libft/ re
	make -C libft/ clean
	$(GCC) $(SRCS) -I mlx/ -I includes/ -I libft/includes/ \
		-framework OpenGL -framework AppKit ./mlx/libmlx.a \
		./libft/libft.a -o $(NAME)

clean:
	rm -f $(OBJT)

fclean:
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean
