#include <stdio.h>
int main() {
    float a, b, c, d, e, f;
    float x1 , y1 , s1;
    float w, z;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    x1 = (d*a) + (a*-d);
    y1 = (e*a) + (b*-d);
    s1 = (f*a) + (c*-d);

    w = s1/y1;
    z = (c - b*w)/a;

    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", z, w);
    return 0;
}