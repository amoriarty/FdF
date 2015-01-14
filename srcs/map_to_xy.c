/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_xy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 09:50:19 by alegent           #+#    #+#             */
/*   Updated: 2015/01/14 10:47:21 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*map_to_xy(t_map *map)
{
	int			x;
	int			y;
	t_map		*tmp;
	t_xy		*new;

	x = 0;
	tmp = map;
	new = NULL;
	while (tmp)
	{
		y = 0;
		while (tmp->map_line[y])
		{
			new = insert_xy(new, tmp->map_line[y], x, y);
			y++;
		}
		x++;
		tmp = tmp->next;
	}
	return (new);
}
