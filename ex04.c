#include <stdio.h>
#define MAX 10

int main() {
    int i,j;
    int ni,nj;
    do {
        scanf("%d",&ni);
    }while(ni <= 0 || ni > MAX);

    do {
        scanf("%d",&nj);
    }while(nj <= 0 || nj > MAX);

    int matriz[ni][nj];

    for (i = 0; i < ni; i++) {
        for (j = 0; j < nj; j++){
            scanf("%d",&matriz[i][j]);
            if (j == 0) printf("linha %d: ",i + 1);
            printf("%d",matriz[i][j]);
            if (j == nj-1) printf("\n");
            else printf(",");
        }
    }
    return 0;
}