# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2015/01/27 16:20:37 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c \
	  srcs/init_mlx.c \
	  srcs/esc_hook.c \
	  srcs/mlx_put_pixel_to_image.c \
	  srcs/draw_line.c \
	  srcs/new_node.c \
	  srcs/insert_node.c \
	  srcs/get_map.c \
	  srcs/fdf.c \
	  srcs/get_max.c \
	  srcs/in_image.c \
	  srcs/projection.c \
	  srcs/proportion.c

OBJT= main.o \
	  init_mlx.o \
	  esc_hook.o \
	  mlx_put_pixel_to_image.o \
	  draw_line.o \
	  new_node.o \
	  insert_node.o \
	  get_map.o \
	  fdf.o \
	  get_max.o \
	  in_image.o \
	  projection.o \
	  proportion.o

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
