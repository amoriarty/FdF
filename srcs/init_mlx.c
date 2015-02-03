/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:25:46 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 15:19:39 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_mlx			*init_mlx(void)
{
	t_mlx		*new;

	if (!(new = (t_mlx *)malloc(sizeof(t_mlx))))
		return (NULL);
	new->mlx = mlx_init();
	new->win = mlx_new_window(new->mlx, X_SIZE, Y_SIZE, "FdF by alegent");
	new->img = NULL;
	new->map = NULL;
	new->max = NULL;
	new->origin = new_node(X_SIZE / 3, Y_SIZE / 3, 0);
	new->zoom = 10;
	if (!new->mlx || !new->win)
		return (NULL);
	return (new);
}
