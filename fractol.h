#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
//# include "../libft/libft.h"
# include <fcntl.h>
# include <mlx.h>

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

#endif