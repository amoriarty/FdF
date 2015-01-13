/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 13:16:41 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 13:26:39 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*get_coor(t_xy *base)
{
	t_xy		*final;

	final = init_xy();
	final->x = base->x + CTE * base->z;
	final->y = (base->y - base->z) + (CTE / 2) * base->z;
	final->z = base->z;
	return (final);
}
