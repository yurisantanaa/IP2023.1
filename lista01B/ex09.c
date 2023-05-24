#include <stdio.h>
 
double v_absoluto(double x) {
    if (x<0) x = -x;
    return x;
}
 
 
int main () {
    double n, e; //numero e erro
    double r_atual = 1, r_ant;
    double diff; //erro calc
 
    scanf("%lf %lf", &n, &e);
 
    do{
        r_ant = r_atual;
        r_atual = (r_ant + n/r_ant)/2;
        diff = n - r_atual * r_atual;
        diff = v_absoluto(diff);
        printf("r: %.9lf, err: %.9lf\n", r_atual, diff);
 
    }while (diff > e);
 
 
 
    return 0;
}