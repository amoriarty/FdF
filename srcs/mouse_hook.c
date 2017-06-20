/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 10:29:43 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 11:17:08 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				mouse_hook(int button, int x, int y, t_mlx *mlx)
{
	(void)x;
	(void)y;
	mlx->zoom += (button == 4) ? 1 : 0;
	mlx->zoom -= (button == 5) ? 1 : 0;
	mlx->iso = (button == 1) ? TRUE : mlx->iso;
	mlx->iso = (button == 2) ? FALSE : mlx->iso;
	if (button)
	{
		mlx_clear_window(mlx->mlx, mlx->win);
		init_img(mlx);
		fdf(mlx);
	}
	return (SUCCESS);
}
