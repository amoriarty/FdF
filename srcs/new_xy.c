/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_xy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 08:58:27 by alegent           #+#    #+#             */
/*   Updated: 2015/01/14 10:44:00 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*new_xy(char *value, int x, int y)
{
	t_xy		*res;

	res = (t_xy *)malloc(sizeof(t_xy));
	if (!res)
		return (NULL);
	res->x = x;
	res->y = y;
	res->z = ft_atoi(value);
	res->next = NULL;
	return (res);
}
