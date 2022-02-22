#include "fractol.h"

void init_mandelbrot(fract *f)
{
    f->itmax = 40;
    f->zoom = 250;
    f->x1 = -2.05;
    f->y1 = -1.3;
    f->color = 405;
    f->width = 1080;
    f->height = 720;
}

void    start_mandelbrot(fract *f)
{
    
}