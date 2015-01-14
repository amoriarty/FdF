# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2015/01/14 10:17:49 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c \
	  srcs/init_mlx.c \
	  srcs/esc_hook.c \
	  srcs/put_img_pixel.c \
	  srcs/draw_line.c \
	  srcs/get_coor.c \
	  srcs/new_xy.c \
	  srcs/get_map.c \
	  srcs/new_node.c \
	  srcs/insert_node.c \
	  srcs/insert_xy.c \
	  srcs/map_to_xy.c

OBJT= main.o \
	  init_mlx.o \
	  esc_hook.o \
	  put_img_pixel.o \
	  draw_line.o \
	  get_coor.o \
	  new_xy.o \
	  get_map.o \
	  new_node.o \
	  insert_node.o \
	  insert_xy.o \
	  map_to_xy.o

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
