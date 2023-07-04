#include <stdio.h>

int main() {
    int matriz[2][2];
    int i,j;
for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++){
    scanf("%d",&matriz[i][j]);
    }
}
    double determinante = matriz[0][0]* matriz[1][1] - matriz[1][0]*matriz[0][1];
    printf("%.2lf\n",determinante);
    return 0;
}