/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:54:47 by alegent           #+#    #+#             */
/*   Updated: 2015/01/27 10:55:57 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_xy		t_xy;
struct					s_xy
{
	int					x;
	int					y;
	int					z;
	t_xy				*next;
};

typedef struct s_env	t_env;
struct					s_env
{
	void				*mlx;
	void				*win;
	void				*img;
	char				*data;
	int					bpp;
	int					sizeline;
	int					endian;
	t_xy				*map;
	t_xy				*max;
};

typedef struct s_node	t_node;
struct					s_node
{
	char				*line;
	t_node				*next;
};

#endif
