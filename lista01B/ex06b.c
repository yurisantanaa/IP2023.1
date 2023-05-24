#include <stdio.h>
 
int main () {
 
    int qtd, n, tamanhoatual, tamanhomax , anterior; 
    int i; 
    
    scanf("%d", &qtd);
    scanf("%d", &n);
    tamanhoatual=1;
    tamanhomax=1;
    
    for(i=2; i<=qtd; i++){
        anterior=n;
        scanf("%d", &n);
        if (n>anterior){
            tamanhoatual++;
            if(tamanhoatual>tamanhomax) tamanhomax=tamanhoatual;
        }
        else {
            tamanhoatual=1;
        }
    }
    
    printf("O comprimento do segmento crescente maximo e: %d\n", tamanhomax);
    return 0;
}