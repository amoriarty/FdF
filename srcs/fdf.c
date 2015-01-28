/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 10:48:02 by alegent           #+#    #+#             */
/*   Updated: 2015/01/28 13:11:27 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		draw_vert(t_env *env)
{
	t_xy		*tmp;
	t_xy		*tmp0;
	t_xy		*tmp1;
	t_xy		*tmp2;

	tmp = env->map;
	while (tmp)
	{
		tmp0 = env->map;
		while (tmp0)
		{
			if (tmp->y == tmp0->y && tmp->x == tmp0->x + 1)
			{
				tmp1 = projection(env, tmp);
				tmp2 = projection(env, tmp0);
				if (in_image(tmp1) && in_image(tmp2))
					draw_line(env, tmp1, tmp2, BLUE);
			}
			tmp0 = tmp0->next;
		}
		tmp = tmp->next;
	}
}

int				fdf(t_env *env)
{
	t_xy		*tmp;
	t_xy		*tmp1;
	t_xy		*tmp2;

	env->max = get_max(env->map);
	tmp = env->map;
	while (tmp->next)
	{
		if (tmp->x != tmp->next->x - 1)
		{
			tmp1 = projection(env, tmp);
			tmp2 = projection(env, tmp->next);
			if (in_image(tmp1) && in_image(tmp2))
				draw_line(env, tmp1, tmp2, BLUE);
		}
		tmp = tmp->next;
	}
	draw_vert(env);
	mlx_put_image_to_window(env->mlx, env->win, env->img, env->origin->x,
			env->origin->y);
	return (SUCCESS);
}
