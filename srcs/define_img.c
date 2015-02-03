/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 09:57:48 by alegent           #+#    #+#             */
/*   Updated: 2015/02/03 10:13:41 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node				*define_img(t_mlx *mlx, t_node *base, int *xmin, int *ymin)
{
	t_node			*new;
	t_node			*tmp;
	t_node			*project;

	new = NULL;
	tmp = base;
	project = NULL;
	while (tmp)
	{
		project = first_projection(mlx, tmp);
		new = insert_node(new, project->x, project->y, project->z);
		*xmin = (*xmin > project->x) ? project->x : *xmin;
		*ymin = (*ymin > project->y) ? project->y : *ymin;
		tmp = tmp->next;
	}
	*xmin *= (*xmin < 0) ? -1 : 1;
	*ymin *= (*ymin < 0) ? -1 : 1;
	return (get_max(new));
}
