#include <stdio.h>
#include <math.h>

int fatorial(int i) {
    float fat = 1;
    if (i == 0) {
        return 1;
    }
    else {
        while (i > 0){
            fat *= i;
            i--;
        }
        return fat;
    }
 
 
}


int main() {
    double x, resultado , soma = 0;
    int n;
    int i;
    scanf("%lf %d", &x, &n);
    for (i = 0 ; i <= n ; i++) {
        resultado = ( pow(-1, i) * pow(x,2*i) )/fatorial(2*i);
        soma += resultado;
    }
    printf("cos(%.2lf) = %lf",x ,soma);



    return 0;
}