/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 17:42:09 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 17:15:25 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		draw_square(t_env *env)
{
	t_line		top;
	t_line		left;
	t_line		right;
	t_line		bottom;
	t_xy		project0;
	t_xy		project1;
	t_xy		project2;
	t_xy		project3;

	top.start.x = 360;
	top.start.y = 720;
	top.end.x = 720;
	top.end.y = 720;
	left.start.x = 360;
	left.start.y = 360;
	left.end.x = 360;
	left.end.y = 720;
	right.start.x = 720;
	right.start.y = 360;
	right.end.x = 720;
	right.end.y = 720;
	bottom.start.x = 360;
	bottom.start.y = 360;
	bottom.end.x = 720;
	bottom.end.y = 360;
	draw_line(env, &top.start, &top.end, PURPLE);
	draw_line(env, &left.start, &left.end, PURPLE);
	draw_line(env, &right.start, &right.end, PURPLE);
	draw_line(env, &bottom.start, &bottom.end, PURPLE);
	project0.x = 720;
	project0.y = 720;
	parallele(env, &project0, 50, 1);
	project1.x = 360;
	project1.y = 720;
	parallele(env, &project1, 50, 1);
	project2.x = 360;
	project2.y = 360;
	parallele(env, &project2, 50, 1);
	project3.x = 720;
	project3.y = 360;
	parallele(env, &project3, 50, 1);

	return (SUCCESS);
}

int				main(void)
{
	t_env			env;

	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, X_SIZE, Y_SIZE, "42");
	draw_square(&env);
	mlx_key_hook(env.win, key_hook, &env);
	mlx_loop(env.mlx);
	return (SUCCESS);
}
