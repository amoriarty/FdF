# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/13 12:17:39 by alegent           #+#    #+#              #
#    Updated: 2015/02/13 13:58:08 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf

SRC_PATH= srcs/
SRC_NAME= draw_line.c \
		  fdf.c \
		  first_isometric.c \
		  first_projection.c \
		  get_map.c \
		  get_max.c \
		  get_min.c \
		  in_img.c \
		  init_img.c \
		  init_mlx.c \
		  init_node.c \
		  insert_node.c \
		  isometric.c \
		  key_hook.c \
		  main.c \
		  mlx_put_pixel_to_image.c \
		  mouse_hook.c \
		  new_node.c \
		  projection.c
SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_PATH= obj/
OBJ_NAME= $(SRC_NAME:.c=.o)
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

GCC= gcc -Wall -Wextra -Werror

INC_LIB= libft/
INC_PATH= includes/
INC_MLX= mlx/
INC= -I $(INC_LIB) -I $(INC_PATH) -I $(INC_MLX)

FRAMWORK= -framework OpenGL -framework AppKit

LIB= -L $(INC_LIB) -lft -L $(INC_MLX) -lmlx

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(INC_MLX) re
	@make -C $(INC_LIB) re
	@make -C $(INC_LIB) clean
	@echo "Librairy has been compil"
	@$(GCC) $(INC) $(LIB) $(FRAMWORK) $(OBJ) -o $(NAME)
	@echo "Your program is ready to go \!"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" 2> /dev/null
	@$(GCC) $(LIB) $(INC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

norme:
	@norminette $(INC_LIB)*.[ch]
	@norminette $(SRC)
	@norminette $(INC_PATH)*.h

.PHONY: clean fclean re norme
