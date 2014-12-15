# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 17:21:30 by alegent           #+#    #+#              #
#    Updated: 2014/12/15 17:09:14 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRCS= srcs/main.c \
	  srcs/key_hook.c \
	  srcs/mouse_hook.c \
	  srcs/draw_line.c \
	  srcs/draw_circle.c \
	  srcs/draw_ellipse.c \
	  srcs/parallele.c

OBJT= main.o \
	  key_hook.o \
	  mouse_hook.o \
	  draw_line.o \
	  draw_circle.o \
	  draw_ellipse.o \
	  parallele.o

GCC= gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C mlx/ clean
	make -C mlx/
	make -C libft/ re
	make -C libft/ clean
	$(GCC) $(SRCS) -I includes/ -I libft/includes/ -I mlx/ \
		-framework OpenGL -framework AppKit \
		./libft/libft.a ./mlx/libmlx.a -o $(NAME)

clean:
	rm -f $(OBJT)

fclean:
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean
