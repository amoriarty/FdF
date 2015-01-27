/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 11:18:33 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 16:24:51 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*projection(t_xy *coor)
{
	int			x;
	int			y;

	y = (coor->x - CTE * coor->z) * ZOOM;
	x = ((CTE / 2) * coor->z - coor->y) * ZOOM;
	x *= -1;
	x += X_ORG;
	y += Y_ORG;
	return (new_node(x, y, coor->z));
}
