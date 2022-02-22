/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:40:31 by ualcibar          #+#    #+#             */
/*   Updated: 2022/01/26 19:58:42 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "mlx.h"
#include <math.h>

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;


void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	int		x;
	int		y;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	x = 0;
	mlx_win = mlx_new_window(mlx, 1000, 1000, "Hello world!");
	img.img = mlx_new_image(mlx, 1000, 1000);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	/*y = 0;
	while (y < 100) {
		while (x < 100)
		{
			my_mlx_pixel_put(&img, x + y+150, x, 0x00004374);
			x++;
		}
		x = 0;
		y = y + 5;
	}
	x = 100;
	y = 100;
	while (y > 0) {
		while (x > 0)
		{
			my_mlx_pixel_put(&img, -x + y+150, x, 0x00004374);
			x--;
		}
		x = 100;
		y = y - 5;
	}*/
	x = 0;
	y = 0;
	//while (pow(x, 2) + pow(y, 2) < 196)
	//	{
			while (x <= 1600)
			{
				y = sqrt(1600 - pow(x,2));
				if ((pow(x, 2) + pow(y, 2)) == 1600)
				{
					my_mlx_pixel_put(&img, -(y + 150), x + 150, 0x00004374);
					my_mlx_pixel_put(&img, y + 150, x + 150, 0x00004374);
					my_mlx_pixel_put(&img, y + 150, -(x + 150), 0x00004374);
				}
				x++;
				
			}
			
	//	}
	//my_mlx_pixel_put(&img, 5, 5, 0x00FF4374);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
