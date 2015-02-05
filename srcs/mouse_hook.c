/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 10:29:43 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 10:39:47 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
# include <stdio.h>

int				mouse_hook(int button, int x, int y, t_mlx *mlx)
{
	x = x;
	y = y;
	mlx->zoom += (button == 4) ? 1 : 0;
	mlx->zoom -= (button == 5) ? 1 : 0;
	if (button == 4 || button == 5)
	{
		mlx_clear_window(mlx->mlx, mlx->win);
		init_img(mlx);
		fdf(mlx);
	}
	return (SUCCESS);
}
