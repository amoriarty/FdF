/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 09:31:42 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 09:40:02 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node				*get_min(t_mlx *mlx, t_node *map)
{
	int				x;
	int				y;
	t_node			*tmp;
	t_node			*pro;

	x = 0;
	y = 0;
	tmp = map;
	while (tmp)
	{
		pro = first_projection(mlx, tmp);
		x = (x > pro->x) ? pro->x : x;
		y = (y > pro->y) ? pro->y : y;
		tmp = tmp->next;
	}
	x *= (x < 0) ? -1 : 1;
	y *= (y < 0) ? -1 : 1;
	return (new_node(x, y, 0));
}
