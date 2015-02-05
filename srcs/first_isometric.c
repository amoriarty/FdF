/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_isometric.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 11:04:57 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 11:12:13 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node				*first_isometric(t_mlx *mlx, t_node *coor)
{
	int				x;
	int				y;

	y = (CTE * coor->x - CTEE * coor->z) * mlx->zoom;
	x = ((CTE / 2) * coor->x + (CTE / 2) * coor->z - coor->y) * mlx->zoom;
	x *= -1;
	return (new_node(x, y, coor->z));
}
