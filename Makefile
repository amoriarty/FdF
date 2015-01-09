# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2015/01/09 16:01:18 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c \
	  srcs/init_mlx.c \
	  srcs/put_img_pixel.c \
	  srcs/draw_line.c

OBJT= main.o \
	  init_mlx.o \
	  put_img_pixel.o \
	  draw_line.o

GCC= gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C mlx/ clean
	@make -C mlx/
	@make -C libft/ re
	@make -C libft/ clean
	@$(GCC) $(SRCS) -I includes/ -I libft/includes/ -I mlx/ \
		-framework OpenGL -framework AppKit \
		./libft/libft.a ./mlx/libmlx.a -o $(NAME)

clean:
	@rm -f $(OBJT)

fclean:
	@rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean
