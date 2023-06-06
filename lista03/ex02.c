#include <stdio.h>

int NumerosMaioresQueK (int n) {
    int v[n];
    int k;
    int count = 0;
    int i = 0, j;
    do {
        scanf("%d",&v[i]);
        i++;
    }while (i < n);
    scanf("%d",&k);
    for (j=0;j<n;j++) {
        if (v[j] >= k) count += 1;
    }
    return count;
}


int main () {
    int numeros_maioresouiguais;
    int N;
    do {
        scanf("%d", &N);
    } while (N <1 || N > 1000);
    numeros_maioresouiguais = NumerosMaioresQueK(N);
    printf("%d\n",numeros_maioresouiguais);
    return 0;
}