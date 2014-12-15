/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_ellipse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 09:23:20 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 10:14:11 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				draw_ellipse(t_env *env, t_ellipse *ellipse, int color)
{
	double 		a;
	int			x;
	int			y;

	a = 0;
	while (a < 360)
	{
		x = (int)(ellipse->pos->x + ellipse->ray1 * (cos(a)));
		y = (int)(ellipse->pos->y + ellipse->ray2 * (sin(a)));
		mlx_pixel_put(env->mlx, env->win, x, y, color);
		a += (2 * PI) / (8 * ellipse->ray1);
	}
	return (SUCCESS);
}
