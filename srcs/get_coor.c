/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 13:16:41 by alegent           #+#    #+#             */
/*   Updated: 2015/01/15 16:40:15 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*get_coor(t_xy *base, t_xy *new, int zoom)
{
	int			x;
	int			y;

	y = (base->x - CTE * base->z) * zoom;
	x = (CTE / 2 * base->z - base->y) * zoom;
	x *= -1;
	x += X_SIZE / 3;
	y += Y_SIZE / 2;
	new = insert_xy(new, ft_itoa(base->z), x, y);
	return (new);
}
