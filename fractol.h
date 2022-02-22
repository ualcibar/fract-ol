/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:21:43 by ualcibar          #+#    #+#             */
/*   Updated: 2022/02/22 20:40:57 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
//# include "../libft/libft.h"
# include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "minilibx/mlx.h"
#include "libft/libft.h"
#include <math.h>


typedef struct		data_fract
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*imgaddr;
    char            *name;
	int				endian;
 	int				size;
	int				bpp; 
	int				x;
	int				y;
	int				i;
	int				color;
	double			zoom;
	double			pr;
	double			pi;
	int				itmax;
	int				width;
	int				height;
	int				indexfrac;
	double			z_r;
	double			z_i;
	double			tmp;
	double			x1;
	double			y1;
	double			c_r;
	double			c_i;
	//int				mov_juju;
}               fract;

/*					*	
*	    init		*
*					*/
int check_param(fract *f, char *param);
void controller(fract *f);
void    init_map(fract *f);

/*					*	
*	  Mandelbrot	*
*					*/
void init_mandelbrot(fract *f);
void    start_mandelbrot(fract *f);

/*					*	
*	  utils			*
*					*/
void set_color(fract *f);

#endif