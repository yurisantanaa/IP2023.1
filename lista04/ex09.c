#include <stdio.h>

int main() {
    int ni,nj;
    int i,j,maior = 0,menor = 1000;
    float countmaior = 0,countmenor = 0;
    scanf("%d %d",&ni,&nj);
    int total = ni*nj;
    int matriz[ni][nj];
        for (i = 0;i < ni; i++) {
            for (j = 0 ; j < nj ; j++) {
                scanf("%d",&matriz[i][j]);
                if (matriz[i][j] > maior) maior = matriz[i][j];
                else if (matriz[i][j] < menor) menor = matriz[i][j];
            }
        }
        for (i = 0;i < ni; i++) {
            for (j = 0 ; j < nj ; j++) {
                if (matriz[i][j] == maior) countmaior++;
                if (matriz[i][j] == menor) countmenor++;
            }
        }
        double porcentagemmaior = (countmaior/total) * 100;
        double porcentagemmenor = (countmenor/total) * 100;
        printf("%d %.2lf%c",menor,porcentagemmenor,37);
        printf("\n");
        printf("%d %.2lf%c",maior,porcentagemmaior,37);
        printf("\n");
        return 0;
}