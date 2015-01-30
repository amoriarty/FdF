/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:06:27 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 15:00:22 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(int ac, char **av)
{
	t_mlx		*mlx;

	if (ac != 2)
		ft_puterror("fdf", "usage: fdf [map.fdf]");
	if (!(mlx = init_mlx()))
		ft_puterror("fdf", "mlx can't be malloc.");
	mlx->map = get_map(av[1]);
	mlx->max = get_max(mlx->map);
	init_img(mlx);
	mlx_expose_hook(mlx->win, fdf, mlx);
	mlx_key_hook(mlx->win, key_hook, mlx);
	mlx_loop(mlx->mlx);
	return (EXIT_SUCCESS);
}
