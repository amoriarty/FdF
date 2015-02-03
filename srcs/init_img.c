/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:32:43 by alegent           #+#    #+#             */
/*   Updated: 2015/02/03 16:21:49 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			init_img(t_mlx *mlx)
{
	if (mlx->img)
		mlx_destroy_image(mlx->mlx, mlx->img->img);
	if (!(mlx->img = (t_img *)malloc(sizeof(t_img))))
		ft_puterror("fdf", "Can't create image.");
	mlx->img->xmin = 0;
	mlx->img->ymin = 0;
	mlx->img->size = define_img(mlx, mlx->map,
			&mlx->img->xmin, &mlx->img->ymin);
	mlx->img->img = mlx_new_image(mlx->mlx, X_SIZE, Y_SIZE);
	mlx->img->data = mlx_get_data_addr(mlx->img->img,
			&mlx->img->bpp,
			&mlx->img->sizeline,
			&mlx->img->endian);
}
