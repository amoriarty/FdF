# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2015/01/30 15:05:34 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c \
	  srcs/draw_line.c \
	  srcs/fdf.c \
	  srcs/get_map.c \
	  srcs/get_max.c \
	  srcs/init_img.c \
	  srcs/init_mlx.c \
	  srcs/init_node.c \
	  srcs/insert_node.c \
	  srcs/mlx_put_pixel_to_image.c \
	  srcs/new_node.c \
	  srcs/projection.c \
	  srcs/in_img.c \
	  srcs/key_hook.c

OBJT= main.o \
	  draw_line.o \
	  fdf.o \
	  get_map.o \
	  get_max.o \
	  init_img.o \
	  init_mlx.o \
	  init_node.o \
	  insert_node.o \
	  mlx_put_pixel_to_image.o \
	  new_node.o \
	  projection.o \
	  in_img.o \
	  key_hook.o

GCC= gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C mlx/ re
	@make -C libft/ re
	@make -C libft/ clean
	@$(GCC) $(SRCS) -I includes/ -I libft/ -I mlx/ \
		-framework OpenGL -framework AppKit \
		./libft/libft.a ./mlx/libmlx.a -o $(NAME)

clean:
	@rm -f $(OBJT)

fclean:
	@rm -f $(NAME)

re: fclean all clean

.PHONY: re clean fclean
