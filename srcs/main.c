/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 17:42:09 by alegent           #+#    #+#             */
/*   Updated: 2014/12/02 17:54:50 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fdf.h"

int				main(void)
{
	void		*mlx;
	void		*windows;

	mlx = mlx_init();
	windows = mlx_new_window(mlx, 420, 420, "42");
	sleep(5);
	return (42);
}
