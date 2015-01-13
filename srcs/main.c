/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:51 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 15:31:11 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(int ac, char **av)
{
	int			x = 0;
//	t_env		*env;
	t_map		*map;

	if (ac == 1)
	{
		ft_putendl_fd("fdf: usage: fdf [map]", 2);
		exit(EXIT_FAILURE);
	}
	if (ac == 2)
		map = get_map(av[1]);
	while (map)
	{
		x = 0;
		while (map->map_line[x])
		{
			ft_putstr(map->map_line[x++]);
			ft_putchar(' ');
		}
		ft_putchar(EOL);
		map = map->next;
	}
//	env = init_mlx();
//	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
//	mlx_key_hook(env->win, esc_hook, env);
//	mlx_loop(env->mlx);
	return (EXIT_SUCCESS);
}
