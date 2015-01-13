/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:58 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 12:06:38 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <stdlib.h>
# include <math.h>
# include <mlx.h>
# include "libft.h"
# include "get_next_line.h"
# include "struct.h"
# include "define.h"

t_env			*init_mlx(void);
int				esc_hook(int keycode, t_env *mlx);
void			put_img_pixel(t_env *env, t_xy *pixel, int color);
void			draw_line(t_env *env, t_xy *start, t_xy *end, int color);
t_xy			draw_proj(t_env *env, t_xy *pos, int color);

#endif
