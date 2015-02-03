/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:18:09 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 14:50:21 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				in_img(t_node *size, t_node *coor)
{
	size = size;
	if (coor->x < 0 || coor->x > X_SIZE)
		return (FALSE);
	if (coor->y < 0 || coor->y > Y_SIZE)
		return (FALSE);
	return (TRUE);
}
