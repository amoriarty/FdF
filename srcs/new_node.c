/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 14:41:51 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 14:53:42 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map			*new_node(char *line)
{
	t_map		*new;

	new = (t_map *)malloc(sizeof(t_map));
	if (!new)
		return (NULL);
	new->line = ft_strdup(line);
	new->next = NULL;
	return (new);
}
