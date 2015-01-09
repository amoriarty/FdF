/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:00:08 by alegent           #+#    #+#             */
/*   Updated: 2015/01/09 15:32:25 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_env				*init_mlx(void)
{
	t_env			*env;

	if (!(env = (t_env *)malloc(sizeof(t_env))))
	{
		ft_putendl_fd("MALLOC ERROR", 2);
		exit(EXIT_FAILURE);
	}
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, X_SIZE, Y_SIZE, "FdF");
	env->img = mlx_new_image(env->mlx, X_SIZE, Y_SIZE);
	env->data = mlx_get_data_addr(env->img,
									&(env->bpp),
									&(env->sizeline),
									&(env->endian));
	if (!env->mlx || !env->win || !env->img || !env->data)
	{
		ft_putendl_fd("MLX ERROR", 2);
		exit(EXIT_FAILURE);
	}
	return (env);
}
