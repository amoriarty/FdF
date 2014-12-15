/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 17:42:09 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 14:24:54 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(void)
{
	t_env			env;
	int				bpp = 24;
	int				sizeline = X_SIZE;
	int				endian = 0;
	t_xy			pos;

	pos.x = 540;
	pos.y = 540;
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, X_SIZE, Y_SIZE, "42");
	env.img = mlx_new_image(&env.mlx, X_SIZE, Y_SIZE);
	env.data = mlx_get_data_addr(&env.img, &bpp, &sizeline, &endian);
	put_pixel(&pos, VIOLET, env.data, sizeline);
	ft_putendl("SEGFAULT");
	mlx_put_image_to_window(&env.mlx, &env.win, &env.img, 0, 0);
	ft_putendl("SEGFAULT encore !!!");
	mlx_loop(&env.mlx);
	return (SUCCESS);
}
