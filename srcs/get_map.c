/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 13:34:16 by alegent           #+#    #+#             */
/*   Updated: 2015/01/13 15:55:44 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map			*get_map(char *file)
{
	int			fd;
	char		*line;
	t_map		*map;

	map = NULL;
	if ((fd = open(file, O_RDONLY)))
	{
		while (get_next_line(fd, &line))
			map = insert_node(map, line);
	}
	else
	{
		ft_putendl_fd("fdf: Can't read the file", 2);
		exit(EXIT_FAILURE);
	}
	return (map);
}
