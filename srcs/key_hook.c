/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 15:00:45 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 09:56:09 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int			change_color(int keycode, t_mlx *mlx)
{
	int				tmp;

	tmp = mlx->color;
	mlx->color = (keycode == KEY_W) ? WHITE : mlx->color;
	mlx->color = (keycode == KEY_B) ? BLUE : mlx->color;
	mlx->color = (keycode == KEY_G) ? GREEN : mlx->color;
	mlx->color = (keycode == KEY_Y) ? YELLOW : mlx->color;
	mlx->color = (keycode == KEY_M) ? MARINE : mlx->color;
	mlx->color = (keycode == KEY_P) ? PURPLE : mlx->color;
	mlx->color = (keycode == KEY_O) ? ORANGE : mlx->color;
	mlx->color = (keycode == KEY_R) ? RED : mlx->color;
	if (tmp == mlx->color)
		return (FALSE);
	return (SUCCESS);
}

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
		if (keycode == KEY_PLUS || keycode == KEY_MOIN
				|| change_color(keycode, mlx))
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
