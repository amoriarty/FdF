/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 10:05:05 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 11:44:35 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(int ac, char **av)
{
	t_env		*env;

	if (ac == 2)
	{
		if (!(ft_strstr(av[1], ".fdf")))
			ft_puterror("fdf", "usage: fdf [map.fdf]");
		env = init_mlx();
		env->map = get_map(av[1]);
		mlx_expose_hook(env->win, fdf, env);
		mlx_key_hook(env->win, esc_hook, env);
		mlx_loop(env->mlx);
	}
	else
		ft_puterror("fdf", "usage: fdf [map.fdf]");
	return (EXIT_SUCCESS);
}
