/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:51 by alegent           #+#    #+#             */
/*   Updated: 2015/01/09 16:38:40 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				main(void)
{
	t_env		*env;
	t_xy		start;
	t_xy		end;

	env = init_mlx();
	start.x = 360;
	start.y = 360;
	end.x = 720;
	end.y = 360;
	while (start.y <= 720)
	{
		draw_line(env, &start, &end, PURPLE);
		start.y++;
		end.y++;
	}
//	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	mlx_key_hook(env->win, esc_hook, env);
	mlx_loop(env->mlx);
	return (EXIT_SUCCESS);
}
