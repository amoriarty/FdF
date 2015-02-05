/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:08:50 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 11:10:34 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			draw_vert(t_mlx *mlx)
{
	t_node			*tmp;
	t_node			*tmp0;
	t_node			*tmp1;
	t_node			*tmp2;

	tmp = mlx->map;
	while (tmp)
	{
		tmp0 = mlx->map;
		while (tmp0)
		{
			if (tmp->y == tmp0->y && tmp->x == tmp0->x + 1)
			{
				tmp1 = (mlx->iso)
					? isometric(mlx, tmp) : projection(mlx, tmp);
				tmp2 = (mlx->iso)
					? isometric(mlx, tmp0) : projection(mlx, tmp0);
				if (in_img(tmp1) && in_img(tmp2))
					draw_line(mlx, tmp1, tmp2, mlx->color);
			}
			tmp0 = tmp0->next;
		}
		tmp = tmp->next;
	}
}

int					fdf(t_mlx *mlx)
{
	t_node		*tmp;
	t_node		*tmp1;
	t_node		*tmp2;

	tmp = mlx->map;
	while (tmp->next)
	{
		if (tmp->x != tmp->next->x - 1)
		{
			tmp1 = (mlx->iso)
				? isometric(mlx, tmp) : projection(mlx, tmp);
			tmp2 = (mlx->iso)
				? isometric(mlx, tmp->next) : projection(mlx, tmp->next);
			if (in_img(tmp1) && in_img(tmp2))
				draw_line(mlx, tmp1, tmp2, mlx->color);
		}
		tmp = tmp->next;
	}
	draw_vert(mlx);
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img->img, mlx->origin->x,
			mlx->origin->y);
	return (SUCCESS);
}
