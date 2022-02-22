/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:21:14 by ualcibar          #+#    #+#             */
/*   Updated: 2022/02/22 22:10:31 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void set_color(fract *f)
{
	int color;
	
	if (f->i == f->itmax)
		f->color = mlx_get_color_value(f->mlx, f->i * 900000);
	else
		f->color = mlx_get_color_value(f->mlx, f->i * 900000);
	ft_memmove(f->imgaddr + (4 * (f->width * f->y))
		+ (f->x * 4), &f->color, sizeof(int));
}