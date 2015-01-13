/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 14:47:19 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 15:12:23 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map			*insert_node(t_map *list, char *line)
{
	t_map		*new;
	t_map		*tmp;

	if (!(new = new_node(line)))
		return (NULL);
	if (!list)
		return (new);
	tmp = list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (list);
}
