/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:53:41 by alegent           #+#    #+#             */
/*   Updated: 2015/01/20 13:50:57 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(int ac, char **av)
{
	t_env		*env;

	if (ac == 2)
	{
		env = init_mlx();
		env->coor = get_map(av[1]);
		mlx_expose_hook(env->win, fdf, env);
		mlx_key_hook(env->win, esc_hook, env);
		mlx_loop(env->mlx);
	}
	else
	{
		ft_putendl_fd("fdf: usage: fdf [map]", 2);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
