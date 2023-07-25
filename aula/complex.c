#include "complex.h"
#include "stdio.h"
#include "math.h"
#define RETANGULAR 1
#define POLAR 2

Complex cp_new(double r, double i)
{
    Complex c;
    c.r = r;
    c.i = i;
    return c;
}

Complex cp_sum(Complex a, Complex b)
{
    Complex s;
    s.r = a.r + b.r;
    s.i = a.i + b.i;
    return s;
}

void cp_print(Complex c, int tipo)
{
    if (tipo == RETANGULAR)
        if (c.i < 0)
            printf("%.2lf%.2lfi\n", c.r, c.i);
        else
            printf("%.2lf+%.2lfi\n", c.r, c.i);
    else if (tipo == POLAR)
    {
        double p = sqrt((c.r * c.r) + (c.i * c.i));
        double sen = (c.i / p);
        double cos = (c.r / p);
        if (c.i < 0)
            printf("%lf(%lf%lfi)\n", p, cos, sen);
        else
            printf("%lf(%lf+%lfi)\n", p, cos, sen);
    }
}

Complex cp_mult(Complex a, Complex b)
{
    Complex m;
    m.r = (a.r * b.r) - (a.i * b.i);
    m.i = (a.r * b.i) + (a.i * b.r);
    return m;
}

Complex cp_div(Complex a, Complex b)
{
    Complex d;
    d.r = (a.r * b.r + a.i * b.i) / ((b.r * b.r) + (b.i * b.i));
    d.i = (a.i * b.r - a.r * b.i) / ((b.r * b.r) + (b.i * b.i));
    return d;
}