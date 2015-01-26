/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proportion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 13:34:27 by alegent           #+#    #+#             */
/*   Updated: 2015/01/23 15:06:04 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int			cross_product(int a, int b, int d)
{
	return ((a * d) / b);
}

static t_xy			*get_max(t_xy *coor)
{
	t_xy			max;
	t_xy			min;
	t_xy			*tmp;

	max.x = 0;
	max.y = 0;
	min.x = 0;
	min.y = 0;
	tmp = coor;
	while (tmp)
	{
		max.x = (tmp->x > max.x) ? tmp->x : max.x;
		max.y = (tmp->y > max.y) ? tmp->y : max.y;
		min.x = (tmp->x < min.x) ? tmp->x : min.x;
		min.y = (tmp->y < min.y) ? tmp->y : min.y;
		tmp = tmp->next;
	}
	min.x *= (min.x < 0) ? -1 : 1;
	min.y *= (min.y < 0) ? -1 : 1;
	return (new_node(max.x + min.x, max.y + min.y, 0));
}

t_xy				*proportion(t_xy *coor)
{
	t_xy		*tmp;
	t_xy		*max;

	max = get_max(coor);
	tmp = coor;
	while (tmp)
	{
		tmp->x = cross_product(tmp->x, max->x, X_SIZE - 2);
		tmp->y = cross_product(tmp->y, max->y, Y_SIZE + 2);
		tmp = tmp->next;
	}
	return (coor);
}
