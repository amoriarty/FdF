/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:42:27 by alegent           #+#    #+#             */
/*   Updated: 2015/01/30 13:43:40 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node			*init_node(void)
{
	t_node		*new;

	if (!(new = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->z = 0;
	new->next = NULL;
	return (new);
}
