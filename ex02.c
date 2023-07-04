#include <stdio.h>

int main() {
    int n;
    int i,j;
    scanf("%d",&n);
    int k = n - 1;
    int matriz[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
            printf("%d\n",matriz[i][k]);
            k--;
        }
    return 0;
}