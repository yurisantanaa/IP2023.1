#include <stdio.h>

double v_absoluto(double x) {
        if (x<0) x = -x;
        return x;
}


void raiz (double n, double erro) {
    double rant, ratual = 1, diff;
    do {
        rant = ratual;
        ratual = ((rant) + n/(rant))/2;
        diff = n - ratual*ratual;
        diff = v_absoluto(diff);
        printf ("r: %.9lf, err: %.9lf\n", ratual, diff);
    } while (diff > erro);
}

int main () {
    double n, erro;
    double p;
    scanf("%lf %lf", &n , &erro);
    raiz(n,erro);




    return 0;
}