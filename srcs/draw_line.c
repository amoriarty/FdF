/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 11:34:06 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 11:22:09 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		draw_vertical(t_env *env, t_xy *start, t_xy *end, int color)
{
	int			x;
	int			y;

	y = start->y;
	while (y <= end->y)
	{
		x = start->x + ((end->x - start->x) * (y - start->y) /
			(end->y - start->y));
		mlx_pixel_put(env->mlx, env->win, x, y, color);
		y++;
	}
	return (SUCCESS);
}

int				draw_line(t_env *env, t_xy *start, t_xy *end, int color)
{
	int			x;
	int			y;

	x = start->x;
	if (start->x == end->x)
		return (draw_vertical(env, start, end, color));
	while (x <= end->x)
	{
		y = start->y + ((end->y - start->y) * (x - start->x) /
				(end->x - start->x));
		mlx_pixel_put(env->mlx, env->win, x, y, color);
		x++;
	}
	return (SUCCESS);
}
