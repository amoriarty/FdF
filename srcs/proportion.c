/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proportion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 12:26:10 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 16:50:31 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		cross_product(int a, int b, int d)
{
	return ((a * d) / b);
}

t_xy			*proportion(t_xy *coor, t_xy *max)
{
	coor->x = cross_product(coor->x, max->x, X_SIZE);
	coor->y = cross_product(coor->y, max->y, Y_SIZE);
	return (coor);
}
