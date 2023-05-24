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
    double x, n, resultado, soma;
    int i;
    scanf("%lf %lf",&x, &n);
    for (i = 0; i <= n; i++){
        resultado = pow(x, i)/fatorial(i);
        soma += resultado;
    }
        printf("e^%.2lf = %lf\n", x, soma);
 
 
    return 0;
}