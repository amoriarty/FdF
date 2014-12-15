/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 17:39:46 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 14:19:56 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <stdlib.h>
# include <math.h>
# include "libft.h"
# include "get_next_line.h"
# include "mlx.h"
# include "struct.h"
# include "define.h"

int			key_hook(int keycode, t_env *mlx);
int			mouse_hook(int button, int x, int y, t_env *mlx);
int			draw_line(t_env *env, t_xy *start, t_xy *end, int color);
int			draw_circle(t_env *env, t_circle *circle, int color);
int			draw_ellipse(t_env *env, t_ellipse *ellipse, int color);
void		put_pixel(t_xy *pos, int color, char *data, int sizeline);

#endif
