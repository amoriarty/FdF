/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 13:09:27 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 10:42:06 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_node		t_node;
struct						s_node
{
	int						x;
	int						y;
	int						z;
	t_node					*next;
};

typedef struct s_img		t_img;
struct						s_img
{
	void					*img;
	char					*data;
	int						bpp;
	int						sizeline;
	int						endian;
	t_node					*min;
};

typedef struct s_mlx		t_mlx;
struct						s_mlx
{
	void					*mlx;
	void					*win;
	t_img					*img;
	t_node					*map;
	t_node					*max;
	t_node					*origin;
	int						zoom;
	int						color;
};

#endif
