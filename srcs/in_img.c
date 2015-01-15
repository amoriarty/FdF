/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:27:52 by alegent           #+#    #+#             */
/*   Updated: 2015/01/15 17:16:32 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				in_img(t_env *env, t_xy *tmp)
{
	env = env;
	if (tmp->x > tmp->next->x)
		return (FALSE);
	if (tmp->x > X_SIZE)
		return (FALSE);
	if (tmp->next->x > X_SIZE)
		return (FALSE);
	if (tmp->y > Y_SIZE)
		return (FALSE);
	if (tmp->next->y > Y_SIZE)
		return (FALSE);
	return (TRUE);
}
