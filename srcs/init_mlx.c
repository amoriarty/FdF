/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:25:46 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 09:52:10 by alegent          ###   ########.fr       */
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
	new->origin = new_node(0, 0, 0);
	new->zoom = ZOOM;
	new->color = WHITE;
	if (!new->mlx || !new->win)
		return (NULL);
	return (new);
}
