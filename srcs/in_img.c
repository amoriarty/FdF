/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:18:09 by alegent           #+#    #+#             */
/*   Updated: 2015/02/03 10:26:09 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				in_img(t_node *size, t_node *coor)
{
	if (coor->x < 0 || coor->x > size->x)
		return (FALSE);
	if (coor->y < 0 || coor->y > size->y)
		return (FALSE);
	return (TRUE);
}
