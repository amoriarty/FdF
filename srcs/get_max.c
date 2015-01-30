/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:54:48 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 13:58:57 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node			*get_max(t_node *map)
{
	t_node		*max;
	t_node		*min;
	t_node		*tmp;

	max = init_node();
	min = init_node();
	tmp = map;
	while (tmp)
	{
		max->x = (tmp->x > max->x) ? tmp->x : max->x;
		max->y = (tmp->y > max->y) ? tmp->y : max->y;
		min->x = (tmp->x < min->x) ? tmp->x : min->x;
		min->y = (tmp->y < min->y) ? tmp->y : min->y;
		tmp = tmp->next;
	}
	min->x *= (min->x < 0) ? -1 : 1;
	min->y *= (min->y < 0) ? -1 : 1;
	return (new_node(max->x + min->x, max->y + min->y, 0));
}
