/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 14:14:15 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 14:41:44 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			put_pixel(t_xy *pos, int color, char *data, int sizeline)
{
	data[(pos->x + 4) * ((pos->y * 4) + sizeline)] = color;
	ft_putendl("Putain de connard de merde, fuck you sale fils de chienne, je vais niquer toute ta famille et ta sale gueule de merde jusqu'a ce que tu ne puisse plus macher une putain de salade !!!");
	data[((pos->x + 4) * (sizeline * 4)) + 1] = color;
	data[((pos->x + 4) * (sizeline * 4)) + 2] = color;
}
