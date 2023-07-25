#include <stdio.h>
#include <stdbool.h>

bool ehPermutacao(int matriz[500][500], int n) {
    int i,j;
    int count = 0;
    int somacount = 0;
    for (j = 0; j < n; j++){
        for (i = 0; i < n; i++) {
            if (matriz[i][j] != 0) {
                count++;
                somacount += matriz[i][j];
            }
        }
    }
    if (count != somacount || count != n) return false;
    else return true;
}

int main (){
    int n,soma = 0;
    int i,j;
    scanf("%d",&n);
    int matriz[500][500];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            scanf("%d",&matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    if (ehPermutacao(matriz,n) == true) printf("%d\nPERMUTACAO\n%d\n",n,soma);
    else printf("%d\nNAO EH PERMUTACAO\n%d\n",n,soma);
    return 0;
}