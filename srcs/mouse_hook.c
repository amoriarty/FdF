/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 10:52:13 by alegent           #+#    #+#             */
/*   Updated: 2014/12/12 10:59:13 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				mouse_hook(int button, int x, int y, t_env *mlx)
{
	if (mlx == NULL)
		return (ERROR);
	ft_putstr("Button = ");
	ft_putnbr(button);
	ft_putstr(" (");
	ft_putnbr(x);
	ft_putchar(':');
	ft_putnbr(y);
	ft_putendl(")");
	return (SUCCESS);
}
