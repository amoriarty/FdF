/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:24:44 by alegent           #+#    #+#             */
/*   Updated: 2015/01/28 13:12:01 by alegent          ###   ########.fr       */
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

t_env			*init_mlx(void);
int				esc_hook(int keycode, t_env *mlx);
void			mlx_put_pixel_to_image(t_env *env, t_xy *pixel, int color);
void			draw_line(t_env *env, t_xy *start, t_xy *end, int color);
t_xy			*new_node(int x, int y, int z);
t_xy			*insert_node(t_xy *list, int x, int y, int z);
t_xy			*get_map(char *file);
int				fdf(t_env *env);
t_xy			*get_max(t_xy *map);
int				in_image(t_xy *coor);
t_xy			*projection(t_env *env, t_xy *coor);
t_xy			*proportion(t_xy *coor, t_xy *max);

#endif
