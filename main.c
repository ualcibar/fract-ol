#include "fractol.h"

int check_param(fract *f, char *param)
{
    f->indexfrac = -1;
    if (ft_strcmp(param, "mandelbrot") == 0)
	{
		init_mandelbrot(&f);
        f->name = param;
		f->indexfrac = 0;
	}
    return f->indexfrac;
}

void controller(fract *f)
{
    if (f->indexfrac == 0)
        start_mandelbrot(&f);
}

void    init_map(fract *f)
{
    f->mlx = mlx_init();
    f->win = mlx_new_window(f->mlx, f->width, f->height, f->name);
    f->img = mlx_new_image(f->mlx, f->width, f->height);
    f->imgaddr = mlx_get_data_addr(f->img, f->bpp, f->size, f->endian);
    controller(&f);
}
int main(int argc, char **argv)
{
    fract f;

    if (check_param(&f, argv[1]) == -1)
    {

    }
    init_map(&f);
}

// https://github.com/BinaryBenji/Fractol.42/blob/master/src/mandelbrot.c