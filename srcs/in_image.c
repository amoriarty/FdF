/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_image.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 11:00:38 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 11:02:43 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				in_image(t_xy *coor)
{
	if (coor->x < 0 || coor->x > X_SIZE + 1)
		return (FALSE);
	if (coor->y < 0 || coor->y > Y_SIZE + 1)
		return (FALSE);
	return (TRUE);
}
