/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_put_pixel_to_image.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:30:56 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 14:55:29 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			mlx_put_pixel_to_image(t_mlx *mlx, t_node *pixel, int color)
{
	int						x;
	int						y;
	unsigned int			c;
	char					octet[4];

	y = pixel->y * mlx->img->sizeline;
	x = pixel->x * mlx->img->bpp / 8;
	c = mlx_get_color_value(mlx->mlx, color);
	octet[0] = (c) & 0xFF;
	octet[1] = (c >> 8) & 0xFF;
	octet[2] = (c >> 16) & 0xFF;
	octet[3] = (c >> 24) & 0xFF;
	mlx->img->data[x + y] = octet[0];
	mlx->img->data[x + y + 1] = octet[1];
	mlx->img->data[x + y + 2] = octet[2];
	mlx->img->data[x + y + 3] = octet[3];
}
