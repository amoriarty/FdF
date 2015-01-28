/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_put_pixel_to_image.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:30:56 by alegent           #+#    #+#             */
/*   Updated: 2015/01/28 13:41:33 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				mlx_put_pixel_to_image(t_env *env, t_xy *pixel, int color)
{
	int						x;
	int						y;
	unsigned int			c;
	unsigned char			octet[4];

	y = pixel->y * env->sizeline;
	x = pixel->x * env->bpp / 8;
	c = mlx_get_color_value(env->mlx, color);
	octet[0] = (c) & 0xFF;
	octet[1] = (c >> 8) & 0xFF;
	octet[2] = (c >> 16) & 0xFF;
	octet[3] = (c >> 24) & 0xFF;
	env->data[x + y] = octet[0];
	env->data[x + y + 1] = octet[1];
	env->data[x + y + 2] = octet[2];
	env->data[x + y + 3] = octet[3];
}
