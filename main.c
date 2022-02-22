/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:14:50 by ualcibar          #+#    #+#             */
/*   Updated: 2022/02/22 22:17:48 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int check_param(fract *f, char *param)
{
    f->indexfrac = 0;
    if (ft_strncmp(param, "mandelbrot", ft_strlen("mandelbrot")) == 0)
	{
		init_mandelbrot(f);
        f->name = param;
		f->indexfrac = 1;
	}
    return f->indexfrac;
}

void controller(fract *f)
{
    if (f->indexfrac == 0)
        start_mandelbrot(f);
}

void    init_map(fract *f)
{
    f->mlx = mlx_init();
    f->win = mlx_new_window(f->mlx, f->width, f->height, f->name);
    f->img = mlx_new_image(f->mlx, f->width, f->height);
    f->imgaddr = mlx_get_data_addr(f->img, &(f->bpp), &(f->size), &(f->endian));
    controller(f);
	mlx_loop(f->mlx);
}
int main(int argc, char **argv)
{
    fract f;
 
    if (check_param(&f, "mandelbrot") == 0)
    {

    }
	else
    	
		        init_map(&f);
}
