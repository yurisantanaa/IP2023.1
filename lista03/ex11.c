#include <stdio.h>

void ordena(double vetor[],int n) {
    int k, j;
    double temp;
    for (j = 0 ; j < n - 1; j ++){
        for (k = 0; k < n - 1 ; k++) {
            if (vetor[k] > vetor[k+1]) {
                temp = vetor[k];
                vetor[k] = vetor [k+1];
                vetor[k + 1] = temp;
            }
        }
    }
}


void mediana(double vetor[],int n) {
    double medianadovetor;
    if (n%2 == 0) {
        medianadovetor = (vetor[n/2]+vetor[n/2-1])/2;
        printf("%.2lf\n",medianadovetor);
    }
    else {
        medianadovetor = vetor[(n - 1)/2];
        printf("%.2lf\n",medianadovetor);
    }
}


int main() {
    int n, i;
    scanf("%d",&n);
    double vetor[n];
    for (i = 0 ; i < n; i++) {
        scanf("%lf",&vetor[i]);
    }
    ordena(vetor,n);
    mediana(vetor,n);
    return 0;
}