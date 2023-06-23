#include <stdio.h>

int maior(int vetor[],int len) {
int i;
int maior = 0;
    for (i = 0 ; i < len; i++){
     if (vetor[i] > maior) {
        maior = vetor[i];
     }   
    }
    return maior;
}

int menor(int vetor[],int len) {
int k;
int menor = 0;
    for (k = 0 ; k < len; k++){
     if (vetor[k] < menor) {
        menor = vetor[k];
     }   
    }
    return menor;
}

void invertevetor(int vetor[],int len) {
    int j;
    for (j = len - 1; j <=0 ; j--) {
        printf("%d",vetor[j]);
    }
    printf("\n");
}


int main() {
    int n;
    int maiornum, menornum;
    scanf("%d",&n);
    int vetor[n];
    int l;
        for (l = 0 ; l < n ; l++) {
            scanf("%d",vetor);
        }    
    int len = sizeof(vetor)/sizeof(vetor[0]);
    printf("%d",*vetor);
    invertevetor(vetor,len);
    maiornum = maior(vetor,len);
    menornum = menor(vetor,len);
    printf("%d",maiornum);
    printf("%d",menornum);

    return 0;
}