/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_vert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 16:48:28 by alegent           #+#    #+#             */
/*   Updated: 2015/01/23 16:40:37 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		to_draw(t_xy *c1, t_xy *c2)
{
	if (c1->y <= c2->y)
		return (FALSE);
	return (TRUE);
}

static int		is_in(t_xy *coor)
{
	if (coor->x < 0 || coor->x > X_SIZE + 2)
		return (FALSE);
	if (coor->y < 0 || coor->y > Y_SIZE - 2)
		return (FALSE);
	return (TRUE);
}

void			draw_vert(t_env *env, t_xy *coor, int color)
{
	t_xy		*tmp1;
	t_xy		*tmp2;

	tmp1 = coor;
	print_coor(coor);
	while (tmp1)
	{
		tmp2 = coor;
		while (tmp2)
		{
			if (tmp1->x == tmp2->x && is_in(tmp1) && is_in(tmp2)
					&& to_draw(tmp1, tmp2))
				draw_line(env, tmp1, tmp2, color);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}
