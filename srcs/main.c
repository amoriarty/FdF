/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:51 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 12:19:37 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int				main(void)
{
	t_env		*env;
	t_xy		start;
	t_xy		end;
	t_xy		*test;

	if ((test = init_xy()))
		ft_putendl("OK");
	env = init_mlx();
	start.x = 720;
	start.y = 433;
	start.z = 50;
	end.x = 1440;
	end.y = 433;
	end.z = 50;
	while (start.y <= 866)
	{
		draw_line(env, &start, &end, PURPLE);
		start.y++;
		end.y++;
	}
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	mlx_key_hook(env->win, esc_hook, env);
	mlx_loop(env->mlx);
	return (EXIT_SUCCESS);
}
