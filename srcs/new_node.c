/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:49:47 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 13:50:51 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node			*new_node(int x, int y, int z)
{
	t_node		*new;

	if (!(new = init_node()))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
