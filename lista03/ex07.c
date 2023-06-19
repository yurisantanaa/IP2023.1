#include <stdio.h>
#define MAX 10000

int maiorNumeroVetor(int vetor[],int qtdelementos) {
    int i;
    int maior = 0;
    for (i = 0; i < qtdelementos; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
    }
    return maior;
}

int quantosTem(int j,int vetor[], int tam){
    int count = 0;
    int k;
    for (k = 0; k < tam ; k++) {
        if (j >= vetor[k]) count++;
    }
    return count;
}


int main() {
    int i, j;
    int qtd_de_elementos = 1, qtd_total = 0;
    int maior;
    do {
        scanf("%d",&qtd_de_elementos);
        if (qtd_de_elementos != 0) {
            int vetor[qtd_de_elementos];
            for (i = 0; i < qtd_de_elementos; i++) {
                scanf("%d",&vetor[i]);   
            }
            maior = maiorNumeroVetor(vetor,qtd_de_elementos);
            for (j = 0 ; j <= maior ; j++) {
                int count = quantosTem(j, vetor, qtd_de_elementos);
                printf("(%d) %d\n", j, count);
            }
        }
    }while (qtd_de_elementos != 0);
    return 0;
}