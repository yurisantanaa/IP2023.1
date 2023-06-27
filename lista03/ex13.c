#include <stdio.h>
#define MAX 100000

void imprimeSequencia(int ini,int fim) {
int i;
char numeros[MAX];
    for (i = ini ; i <= fim ; i++) {
    }

}

int main() {
    int C;
    int ini,fim;
    scanf("%d",&C);
    while (C > 0) {
        scanf("%d%d",&ini,&fim);
        imprimeSequencia(ini,fim);
        C--;
    }

    return 0;
}