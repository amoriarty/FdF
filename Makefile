# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2015/01/13 12:17:46 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c \
	  srcs/init_mlx.c \
	  srcs/esc_hook.c \
	  srcs/put_img_pixel.c \
	  srcs/draw_line.c \
	  srcs/init_xy.c

OBJT= main.o \
	  init_mlx.o \
	  esc_hook.o \
	  put_img_pixel.o \
	  draw_line.o \
	  init_xy.o

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
