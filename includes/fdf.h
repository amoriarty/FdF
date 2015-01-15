/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:58 by alegent           #+#    #+#             */
/*   Updated: 2015/01/15 16:04:03 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>
# include "libft.h"
# include "get_next_line.h"
# include "struct.h"
# include "define.h"


#include <stdio.h>

t_env			*init_mlx(void);
int				esc_hook(int keycode, t_env *mlx);
void			put_img_pixel(t_env *env, t_xy *pixel, int color);
void			draw_line(t_env *env, t_xy *start, t_xy *end, int color);
t_xy			*new_xy(char *value, int x, int y);
t_map			*get_map(char *file);
t_map			*new_node(char *line);
t_map			*insert_node(t_map *list, char *line);
t_xy			*insert_xy(t_xy *list, char *value, int x, int y);
t_xy			*map_to_xy(t_map *map);
t_xy			*get_coor(t_xy *base, t_xy *new, int zoom);
void			draw_vert(t_env *env, t_xy *list, int color);

#endif
