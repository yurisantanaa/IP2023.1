#include <stdio.h>


void UltimaEMaiorNotaInformada(int vetor[],int n) {
    int k,j,maior = 0;
    int count = 0,indice;
    for (k = 0; k < n ; k++) {
        if (vetor[k] == vetor[n-1]) {
           count ++;
        }
        if (vetor[k] > maior) {
            maior = vetor[k];
        }
    }
    for (j = 0; j < n ; j++) {
        if (vetor[j] == maior) {
        indice = j;
        break;
    }
    }
    printf("Nota %d, %d vezes\n",vetor[n-1],count);
    printf("Nota %d, indice %d\n",maior,indice);
}

int main() {
    int n, i;
    scanf("%d",&n);
    int v[n];
    for (i = 0; i < n ; i++) {
        scanf("%d",&v[i]);
    }
    UltimaEMaiorNotaInformada(v, n);
    return 0;
}