/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:15:56 by alegent           #+#    #+#             */
/*   Updated: 2015/02/03 16:24:45 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft.h"
# include "get_next_line.h"
# include "struct.h"
# include "define.h"
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>

t_mlx			*init_mlx(void);
t_node			*init_node(void);
t_node			*new_node(int x, int y, int z);
t_node			*insert_node(t_node *list, int x, int y, int z);
t_node			*get_map(char *file);
t_node			*get_max(t_node *map);
t_node			*first_projection(t_mlx *mlx, t_node *coor);
t_node			*projection(t_mlx *mlx, t_node *coor);
void			init_img(t_mlx *mlx);
void			mlx_put_pixel_to_image(t_mlx *mlx, t_node *pixel, int color);
void			draw_line(t_mlx *mlx, t_node *start, t_node *end, int color);
int				in_img(t_node *coor);
int				fdf(t_mlx *mlx);
int				key_hook(int keycode, t_mlx *mlx);
t_node			*define_img(t_mlx *mlx, t_node *base, int *xmin, int *ymin);

#endif
