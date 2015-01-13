/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_proj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 12:00:23 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 12:06:27 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			draw_proj(t_env *env, t_xy *pos, int color)
{
	t_xy		proj;

	proj.x = pos->x + CTE * pos->z;
	proj.y = (pos->y - pos->z) + (CTE / 2) * pos->z;
	draw_line(env, pos, &proj, color);
	return (proj);
}
