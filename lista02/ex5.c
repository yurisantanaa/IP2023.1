#include <stdio.h>
#include <math.h>

void raizesEq2Grau (double a, double b, double c) {
    double delta;
    double x1,x2;
    double temp;
    delta = b*b - 4*a*c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        if (x2 < x1) {
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n",x2, x1);
        }
        else {
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n",x1, x2);
        }
    }
    else if (delta == 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    }
    else {
        printf("RAIZES IMAGINARIAS\n");
    }
}


int main () {
    double a,b,c;
    scanf("%lf %lf %lf",&a ,&b ,&c);
    raizesEq2Grau(a, b, c);
    return 0;
}