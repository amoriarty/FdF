/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 10:15:52 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 10:40:40 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		is_valid(char *line)
{
	int			i;

	i = 0;
	while (line[i])
	{
		if (!(ft_isdigit(line[i])))
		{
			if (line[i] != EOL && line[i] != '-' && line[i] != ' ')
				return (FALSE);
		}
		i++;
	}
	return (TRUE);
}

static t_xy		*convert_map(t_xy *list, char *line)
{
	int			y;
	char		**map;
	static int	x;

	y = 0;
	map = ft_strsplit(line, ' ');
	while (map[y])
	{
		list = insert_node(list, x, y, ft_atoi(map[y]));
		y++;
	}
	x++;
	return (list);
}

t_xy			*get_map(char *file)
{
	int			fd;
	char		*line;
	t_xy		*new;

	new = NULL;
	if ((fd = open(file, O_RDONLY)))
	{
		while (get_next_line(fd, &line))
		{
			if (is_valid(line) == FALSE)
				ft_puterror("fdf", "Map invalid.");
			new = convert_map(new, line);
			free(line);
		}
	}
	else
		ft_puterror("fdf", "Can't open the map file.");
	return (new);
}
