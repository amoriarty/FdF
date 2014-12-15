/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 09:52:54 by alegent           #+#    #+#             */
/*   Updated: 2014/12/15 16:45:35 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_env		t_env;
struct						s_env
{
	void					*mlx;
	void					*win;
	void					*img;
	void					*data;
};

typedef struct s_xy			t_xy;
struct						s_xy
{
	int						x;
	int						y;
};

typedef struct s_line		t_line;
struct						s_line
{
	t_xy					start;
	t_xy					end;
};

typedef struct s_circle		t_circle;
struct						s_circle
{
	t_xy					*pos;
	int						ray;
};

typedef struct s_ellipse	t_ellipse;
struct						s_ellipse
{
	t_xy					*pos;
	int						ray1;
	int						ray2;
};

#endif
