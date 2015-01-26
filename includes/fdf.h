/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 11:10:52 by alegent           #+#    #+#             */
/*   Updated: 2015/01/20 16:51:28 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft.h"
# include "get_next_line.h"
# include "struct.h"
# include "define.h"
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>

/*
** Fonctions relevant du fonctionnement de mlx.
*/

t_env			*init_mlx(void);
int				esc_hook(int keycode, t_env *mlx);
int				fdf(t_env *env);

/*
** Fonctions de recuperation de la carte.
*/

t_xy			*get_map(char *file);

/*
** Fonction de modification des coordonnee en pixels.
*/

t_xy			*projection(t_xy *coor, int zoom);
t_xy			*proportion(t_xy *coor);

/*
** Fonction simple pour afficher toutes les coordonnee a l'ecran.
*/

void			print_coor(t_xy *list);

/*
** Fonctions de creation et d'ajout d'element dans une liste chaine t_xy.
*/

t_xy			*new_node(int x, int y, int z);
t_xy			*insert_node(t_xy *list, int x, int y, int z);

/*
** Fonctions de modification du pixel d'une image et de tracer de segment.
*/

void			put_img_pixel(t_env *env, t_xy *pixel, int color);
void			draw_line(t_env *env, t_xy *start, t_xy *end, int color);
void			draw_vert(t_env *env, t_xy *coor, int color);

#endif
