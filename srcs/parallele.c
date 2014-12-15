/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parallele.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 16:53:26 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 18:32:20 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static t_xy		projection(t_xy *pos, int z, double cte)
{
	t_xy		res;

	res.x = pos->x + cte * z;
	res.y = pos->y + (cte / 2) * z;
	return (res);
}

int				parallele(t_env *env, t_xy *pos, int z, double cte)
{
	t_xy		final;
	t_xy		final2;

	final = projection(pos, z, cte);
	final2 = projection(&final, z, cte);
	draw_line(env, pos, &final, GREEN);
	draw_line(env, &final, &final2, GREEN);
	return (SUCCESS);
}
