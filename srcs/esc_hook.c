/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   esc_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 16:34:17 by alegent           #+#    #+#             */
/*   Updated: 2015/01/09 16:35:59 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				esc_hook(int keycode, t_env *mlx)
{
	if (mlx == NULL)
		return (ERROR);
	if (keycode == KEY_ESC)
		exit(EXIT_SUCCESS);
	return (SUCCESS);
}
