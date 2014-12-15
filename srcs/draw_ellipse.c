/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_ellipse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 09:23:20 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 16:42:44 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				draw_ellipse(t_env *env, t_ellipse *ellipse, int color)
{
	double 		a;
	int			x;
	int			y;
	int			rayon;

	a = 0;
	rayon = (ellipse->ray1 > ellipse->ray2) ? ellipse->ray1 : ellipse->ray2;
	while (a < 360)
	{
		x = (int)(ellipse->pos->x + ellipse->ray1 * (cos(a)));
		y = (int)(ellipse->pos->y + ellipse->ray2 * (sin(a)));
		mlx_pixel_put(env->mlx, env->win, x, y, color);
		a += (2 * PI) / (8 * rayon);
	}
	return (SUCCESS);
}
