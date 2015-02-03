/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 15:00:45 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 15:24:23 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int					key_hook(int keycode, t_mlx *mlx)
{
	if (mlx == NULL)
		return (ERROR);
	if (keycode == KEY_ESC || keycode == KEY_Q)
		exit(EXIT_SUCCESS);
	mlx->origin->x += (keycode == KEY_RIGHT) ? 10 : 0;
	mlx->origin->x -= (keycode == KEY_LEFT) ? 10 : 0;
	mlx->origin->y += (keycode == KEY_DOWN) ? 10 : 0;
	mlx->origin->y -= (keycode == KEY_UP) ? 10 : 0;
	mlx->zoom += (keycode == KEY_PLUS) ? 1 : 0;
	mlx->zoom -= (keycode == KEY_MOIN) ? 1 : 0;
	if (keycode)
	{
		mlx_clear_window(mlx->mlx, mlx->win);
		if (keycode == KEY_PLUS || keycode == KEY_MOIN)
		{
			init_img(mlx);
			fdf(mlx);
		}
		else
			mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img->img,
				mlx->origin->x, mlx->origin->y);
	}
	return (SUCCESS);
}
