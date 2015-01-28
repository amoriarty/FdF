/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 11:18:33 by alegent           #+#    #+#             */
/*   Updated: 2015/01/28 13:10:55 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*projection(t_env *env, t_xy *coor)
{
	int			x;
	int			y;

	y = (coor->x - CTE * coor->z) * env->zoom;
	x = ((CTE / 2) * coor->z - coor->y) * env->zoom;
	x *= -1;
	x += env->origin->x;
	y += env->origin->y;
	return (new_node(x, y, coor->z));
}
