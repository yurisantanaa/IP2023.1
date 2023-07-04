#include <stdio.h>



int main() {
    int i,j;
    int matriz[6][6];
    int soma,maior = -64;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++){
            soma = matriz[i][j] + matriz [i][j + 1] + matriz[i][j + 2] + matriz[i+1][j+1] + matriz[i+2][j] + matriz[i+2][j+1] + matriz[i+2][j+2];
            if (soma > maior) maior = soma;
        }
    }
    printf("%d\n",maior);
    return 0;
}