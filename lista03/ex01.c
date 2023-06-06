#include <stdio.h>
#include <stdbool.h>
#define MAX 100000

void procurarNumeros(int n) {
    int v[n];
    int numero_atual, numero_linhas;
    int i = 0, j = 0 , k;
    bool achou;

    do {
        scanf("%d" ,&v[i]);
        i++;
    } while (i < n);
    scanf("%d", &numero_linhas);
    if (numero_linhas >= 1 && numero_linhas <=1000) {
        do {
            achou = false;
            scanf("%d", &numero_atual);
            for (k = 0; k < n ; k++) {
                if (v[k] == numero_atual) {
                    printf("ACHEI\n");
                    achou = true;
                }
            }
            if (achou == false) {
                printf("NAO ACHEI\n");
            }
            j++;
        } while (j < numero_linhas);
    }
}

int main () {
    int n;
    scanf("%d",&n);
    if (n >= 1 && n <= MAX) procurarNumeros(n);
    return 0;
}