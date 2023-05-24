#include <stdio.h>


void RetornaCuboComoSomaDeImpares(int n) {
    int i;
    int resultado;
    printf("%d*%d*%d = ",n, n, n);
    for (i = 0 ; i < n ; i++) {
        resultado = ( n + (n-1)*(n-1) + 2*i );
        printf("%d", resultado);
        if (n > i+1) {
            printf("+");
        }
    }
    printf("\n");    
}


int main () {
    int n, i;
    scanf("%d", &n);
    for (i = 1 ; i <= n ; i++) {
        RetornaCuboComoSomaDeImpares(i);
    }

    return 0;
}