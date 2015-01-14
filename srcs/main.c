/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:51 by alegent           #+#    #+#             */
/*   Updated: 2015/01/14 10:50:52 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(int ac, char **av)
{
	t_env		*env;
	t_map		*map;
	t_xy		*new;
	t_xy		*tmp;

	if (ac == 1)
	{
		ft_putendl_fd("fdf: usage: fdf [map]", 2);
		exit(EXIT_FAILURE);
	}
	env = init_mlx();
	map = get_map(av[1]);
	new = map_to_xy(map);
	tmp = new;
	while (tmp->next)
	{
		draw_line(env, tmp, tmp->next, GREEN);
		tmp = tmp->next;
	}
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	mlx_key_hook(env->win, esc_hook, env);
	mlx_loop(env->mlx);
	return (EXIT_SUCCESS);
}
