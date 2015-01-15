/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_vert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:43:02 by alegent           #+#    #+#             */
/*   Updated: 2015/01/15 16:08:04 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				draw_vert(t_env *env, t_xy *list, int color)
{
	t_xy			*tmp;
	t_xy			*tmp2;

	tmp = list;
	while (tmp)
	{
		tmp2 = list;
		while (tmp2)
		{
			if (tmp->x == tmp2->x)
				draw_line(env, tmp, tmp2, color);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}
