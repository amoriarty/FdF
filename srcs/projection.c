/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 14:37:47 by alegent           #+#    #+#             */
/*   Updated: 2015/01/23 09:43:04 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy				*projection(t_xy *coor, int zoom)
{
	int				x;
	int				y;
	t_xy			*new;
	t_xy			*tmp;

	tmp = coor;
	new = NULL;
	while (tmp)
	{
		y = (tmp->x - CTE * tmp->z) * zoom;
		x = (CTE / 2 * tmp->z - tmp->y) * zoom;
		x *= -1;
		x += X_SIZE / 2;
		y += Y_SIZE / 2;
		new = insert_node(new, x, y, tmp->z);
		tmp = tmp->next;
	}
	return (new);
}
