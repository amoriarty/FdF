/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 17:39:46 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 17:07:03 by alegent          ###   ########.fr       */
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
int			parallele(t_env *env, t_xy *pos, int z, double cte);

#endif
