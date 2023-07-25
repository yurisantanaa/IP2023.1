#include <stdio.h>

int main() {
    int n;
    int i,j,k = 0;
    int l,m;
    char borda, meio;
    scanf("%d %c %c",&n,&borda,&meio);
    char matriz[n][n];

    if (n <= 99 && n % 2 == 1) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++){
            if (matriz[i][j] != borda && matriz [i][j] != meio) matriz[i][j] = ' ';
                if (j == (n-1)/2) {
                    matriz[i][j+k] = borda;
                    matriz[i][j-k] = borda;
                    for (l = j - k+1; l < (j+k) ; l++) {
                        matriz[i][l] = meio;
                    }
                    if (i <= (n-1)/2 - 1) k++;
                    else k--;
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++){
                    printf("%c ",matriz[i][j]);
                    if (j == n - 1) printf("\n");
            }
        }
    }else printf("Dimensao invalida!\n");
    return 0;
}