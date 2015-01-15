/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:50:51 by alegent           #+#    #+#             */
/*   Updated: 2015/01/15 16:23:39 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		print_coor(t_xy *base, t_xy *after)
{
	t_xy		*tmp1;
	t_xy		*tmp2;

	tmp1 = base;
	tmp2 = after;
	while (tmp1 && tmp2)
	{
		printf("(%d, %d, %d) ", tmp1->x, tmp1->y, tmp1->z);
		printf("(%d, %d, %d)\n", tmp2->x, tmp2->y, tmp2->z);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
}

int				main(int ac, char **av)
{
	t_env		*env;
	t_map		*map;
	t_xy		*new = NULL;
	t_xy		*new2 = NULL;
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
	while (tmp)
	{
		new2 = get_coor(tmp, new2, 20);
		tmp = tmp->next;
	}
	tmp = new2;
	print_coor(new, new2);
	while (tmp->next)
	{
	 	if ((tmp->x < tmp->next->x) && (tmp->x < X_SIZE/2 * env->bpp / 8) && (tmp->next->x < X_SIZE/2 * env->bpp / 8) && (tmp->y < Y_SIZE/2 * env->sizeline) && (tmp->next->y < Y_SIZE/2 * env->sizeline))
			draw_line(env, tmp, tmp->next, PURPLE);
		tmp = tmp->next;
	}
	draw_vert(env, new2, BLUE);
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	mlx_key_hook(env->win, esc_hook, env);
	mlx_loop(env->mlx);
	return (EXIT_SUCCESS);
}
