#include <stdlib.h>
#include "fractal.h"

struct fractal *fractal_new(const char *name, int width, int height, double a, double b)
{
    struct fractal *new = (struct fractal*) malloc(sizeof(struct fractal));
    if (new == NULL)
    {
        fprintf(stderr, "Memory allocation error. errno=%d %s\n", errno, strerror(errno));
        exit(EXIT_FAILURE);
    }
    int tab[width][height] = {{0}}; //tous les éléments sont initialisés à 0;
    new->pixel = tab;
    strcpy(new->name,name);
    new->width = width;
    new->height = height;
    new->real = a;
    new->imaginary = b;
    
    return new;
}

void fractal_free(struct fractal *f)
{
    free(f->name);
    free(f);
}

const char *fractal_get_name(const struct fractal *f)
{
    return f->name;
}

int fractal_get_value(const struct fractal *f, int x, int y)
{
    return (f->pixel)[x][y];
}

void fractal_set_value(struct fractal *f, int x, int y, int val)
{
    (f->pixel)[x][y] = val;
}

int fractal_get_width(const struct fractal *f)
{
    return f->width;
}

int fractal_get_height(const struct fractal *f)
{
    return f->height;
}

double fractal_get_a(const struct fractal *f)
{
    return f->a;
}

double fractal_get_b(const struct fractal *f)
{
    return f->b;
}
