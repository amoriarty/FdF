/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 10:50:48 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 12:49:07 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static t_xy		*init_xy(void)
{
	t_xy		*new;

	if (!(new = (t_xy *)malloc(sizeof(t_xy))))
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->z = 0;
	new->next = NULL;
	return (new);
}

t_xy			*get_max(t_xy *map)
{
	t_xy		*max;
	t_xy		*min;
	t_xy		*tmp;

	max = init_xy();
	min = init_xy();
	tmp = map;
	while (tmp)
	{
		max->x = (tmp->x > max->x) ? tmp->x : max->x;
		max->y = (tmp->y > max->y) ? tmp->y : max->y;
		max->z = (tmp->z > max->z) ? tmp->z : max->z;
		min->x = (tmp->x < min->x) ? tmp->x : min->x;
		min->y = (tmp->y < min->y) ? tmp->y : min->y;
		tmp = tmp->next;
	}
	min->x *= (min->x < 0) ? -1 : 1;
	min->y *= (min->y < 0) ? -1 : 1;
	return (new_node(max->x + min->x, max->y + min->y, max->z));
}
