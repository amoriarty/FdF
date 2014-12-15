/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 17:26:15 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 09:31:35 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				draw_circle(t_env *env, t_circle *circle, int color)
{
	double 		a;
	int			x;
	int			y;

	a = 0;
	while (a < 360)
	{
		x = (int)(circle->pos->x + circle->ray * (cos(a)));
		y = (int)(circle->pos->y + circle->ray * (sin(a)));
		mlx_pixel_put(env->mlx, env->win, x, y, color);
		a += (2 * PI) / (8 * circle->ray);
	}
	return (SUCCESS);
}
