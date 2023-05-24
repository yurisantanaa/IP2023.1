#include <stdio.h>
int main(){
    float tf, tc, cp, cm;
    scanf("%f", &tf);
    scanf("%f", &cp);
    tc = (tf-32)*5/9;
    cm = cp * 25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", tc);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", cm);
    return 0;
}