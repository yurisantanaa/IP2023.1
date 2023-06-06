#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int next_power (int n,int p,int *pont_i) {
    int potencia_atual = 0, potencia_antiga;
    
    while (potencia_atual <  n) {
        potencia_antiga = potencia_atual;
        potencia_atual = pow(*pont_i,p);
        *pont_i = *pont_i + 1; 
    }

    if (abs(potencia_atual-n) < abs(potencia_antiga-n)) {
        *pont_i = *pont_i-1;
        return potencia_atual;
    }
    else {
        *pont_i = *pont_i-2;
        return potencia_antiga;
    }
       
}



int main () {
    int i = 0;
    int *pont_i = &i; 
    int n,p;
    int valor_pot_prox;
    scanf("%d %d", &n, &p);
    valor_pot_prox = next_power(n,p,&i);
    printf("%d -> %d^%d = %d\n", n,*pont_i, p, valor_pot_prox);
    return 0;
}