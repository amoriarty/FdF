/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img_pixel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:39:03 by alegent           #+#    #+#             */
/*   Updated: 2015/01/15 14:28:55 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void						put_img_pixel(t_env *env, t_xy *pixel, int color)
{
	int						x;
	int						y;
	unsigned int			c;
	unsigned char			octect[4];

	y = pixel->y * env->sizeline;
	x = pixel->x * env->bpp / 8;
	c = mlx_get_color_value(env->mlx, color);
	octect[0] = (c) & 0xFF;
	octect[1] = (c >> 8) & 0xFF;
	octect[2] = (c >> 16) & 0xFF;
	octect[3] = (c >> 24) & 0xFF;
	env->data[x + y] = octect[0];
	env->data[x + y + 1] = octect[1];
	env->data[x + y + 2] = octect[2];
	env->data[x + y + 3] = octect[3];
}
