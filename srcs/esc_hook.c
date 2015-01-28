/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   esc_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 16:34:17 by alegent           #+#    #+#             */
/*   Updated: 2015/01/28 13:38:05 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		new_image(t_env *mlx)
{
	mlx_destroy_image(mlx->mlx, mlx->img);
	mlx_clear_window(mlx->mlx, mlx->win);
	mlx->img = mlx_new_image(mlx->mlx, X_SIZE, Y_SIZE);
	mlx->data = mlx_get_data_addr(mlx->img, &mlx->bpp, &mlx->sizeline,
			&mlx->endian);
	return (SUCCESS);
}

int				esc_hook(int keycode, t_env *mlx)
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
		new_image(mlx);
		fdf(mlx);
	}
	ft_putnbr(keycode);
	ft_putchar(EOL);
	return (SUCCESS);
}
