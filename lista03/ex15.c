#include <stdio.h>
 
int main() {
    int N , K;
    int i, k, count = 0;
    scanf("%d %d",&N, &K);
    int horario[N];
    for (i = 0; i < N ; i++) {
        scanf("%d",&horario[i]);
        if (horario[i] <= 0)
            count++;
    }
    if (count < K) {
        printf("SIM\n");
    }
    else {
        printf("NAO\n");
        for (k = N - 1;k >= 0 ; k--) {
            if (horario[k] <= 0) {
                printf("%d\n",k + 1);
            }
        }
    }
    return 0;
}