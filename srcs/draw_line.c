/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:36:06 by alegent           #+#    #+#             */
/*   Updated: 2015/01/09 16:30:07 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		draw_y_rev(t_env *env, t_xy *start, t_xy *end, int color)
{
	t_xy		pos;

	pos.y = start->y;
	while (pos.y >= end->y)
	{
		pos.x = start->x + ((end->x - start->x) * (pos.y - start->y))
			/ (end->y - start->y);
		put_img_pixel(env, &pos, color);
		pos.y--;
	}
}

static void		draw_y(t_env *env, t_xy *start, t_xy *end, int color)
{
	t_xy		pos;

	if (end->y < start->y)
		return (draw_y_rev(env, start, end, color));
	pos.y = start->y;
	while (pos.y <= end->y)
	{
		pos.x = start->x + ((end->x - start->x) * (pos.y - start->y))
			/ (end->y - start->y);
		put_img_pixel(env, &pos, color);
		pos.y++;
	}
}

static void		draw_x_rev(t_env *env, t_xy *start, t_xy *end, int color)
{
	t_xy		pos;

	pos.x = start->x;
	while (pos.x >= end->x)
	{
		pos.y = start->y + ((end->y - start->y) * (pos.x - start->x))
			/ (end->x - start->x);
		put_img_pixel(env, &pos, color);
		pos.x--;
	}
}

static void		draw_x(t_env *env, t_xy *start, t_xy *end, int color)
{
	t_xy		pos;

	if (end->x < start->x)
		return (draw_x_rev(env, start, end, color));
	pos.x = start->x;
	while (pos.x <= end->x)
	{
		pos.y = start->y + ((end->y - start->y) * (pos.x - start->x))
			/ (end->x - start->x);
		put_img_pixel(env, &pos, color);
		pos.x++;
	}
}

void			draw_line(t_env *env, t_xy *start, t_xy *end, int color)
{
	int			x;
	int			y;

	x = end->x - start->x;
	y = end->y - start->y;
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (x == 0 && y == 0)
		return ;
	else if (y == 0 || x >= y)
		draw_x(env, start, end, color);
	else if (x == 0 || y >= x)
		draw_y(env, start, end, color);
}
