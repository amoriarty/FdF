/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 10:47:00 by alegent           #+#    #+#             */
/*   Updated: 2014/12/12 10:50:32 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				key_hook(int keycode, t_env *mlx)
{
	if (mlx == NULL)
		return (ERROR);
	ft_putstr("Keycode = ");
	ft_putnbr(keycode);
	ft_putchar(EOL);
	if (keycode == KEY_ESC)
		exit(EXIT_SUCCESS);
	return (SUCCESS);
}
