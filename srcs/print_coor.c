/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_coor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 12:29:36 by alegent           #+#    #+#             */
/*   Updated: 2015/01/20 12:32:31 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				print_coor(t_xy *list)
{
	t_xy			*tmp;

	tmp = list;
	while (tmp)
	{
		ft_putchar('(');
		ft_putnbr(tmp->x);
		ft_putstr(", ");
		ft_putnbr(tmp->y);
		ft_putstr(", ");
		ft_putnbr(tmp->z);
		ft_putendl(")");
		tmp = tmp->next;
	}
}
