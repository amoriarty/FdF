/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proportion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 12:26:10 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 12:51:08 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		cross_product(int a, int b, int d)
{
	return ((a * d) / b);
}

t_xy			*proportion(t_xy *coor, t_xy *max)
{
	coor->x = cross_product(coor->x, max->x, X_SIZE - 2);
	coor->y = cross_product(coor->y, max->y, Y_SIZE + 2);
	return (coor);
}
