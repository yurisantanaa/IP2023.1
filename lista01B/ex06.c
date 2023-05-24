#include <stdio.h>
int main () {
    int n, i , tamanhoatual = 1, tamanhomax = 1;
    
    
    do {
        scanf ("%d", &n);
     }while (n <= 0);


    int v[n];
    for (i = 0; i < n ; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n ; i++) {

        if (i == n-1) {
            if ( v[n - 1] < 0 )
            tamanhoatual -=1;
        }
        
        
        
        if (v[i] < v[i + 1]) {
            tamanhoatual += 1;
            if (tamanhoatual > tamanhomax){
                tamanhomax = tamanhoatual;
            }
        }
        else {
            tamanhoatual = 1;
        }
    
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", tamanhomax);
    return 0;
}