/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 12:34:12 by alegent           #+#    #+#             */
/*   Updated: 2015/01/24 16:06:04 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		is_in(t_xy *coor, t_xy *next)
{
	if (next)
	{
		if (coor->x > next->x && coor->y != next->y)
			return (FALSE);
		if (coor->x > next->x && coor->y == next->y)
			return (FALSE);
	}
	if (next->x < 0 || next->x > X_SIZE + 1)
		return (FALSE);
	if (coor->x < 0 || coor->x > X_SIZE + 1)
		return (FALSE);
	if (next->y < 0 || next->y > Y_SIZE + 1)
		return (FALSE);
	if (coor->y < 0 || coor->y > Y_SIZE + 1)
		return (FALSE);
	return (TRUE);
}

int				fdf(t_env *env)
{
	t_xy		*tmp;
	t_xy		*new;

	new = NULL;
	new = projection(env->coor, 42);
	new = proportion(new);
	tmp = new;
	while (tmp->next)
	{
		if (is_in(tmp, tmp->next))
			draw_line(env, tmp, tmp->next, PURPLE);
		tmp = tmp->next;
	}
	draw_vert(env, new, GREEN);
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	return (SUCCESS);
}
