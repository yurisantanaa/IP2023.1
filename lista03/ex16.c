#include <stdio.h>
#include <stdbool.h>

void numerosunicos(int vetor[],int n) {
    int j,k;
    int count = 0;
    int unicos = 0;
    for (j = 0; j < n; j++) {
        count = 0;
        for (k = 0; k < n; k++) {
            if (vetor[j] == vetor[k]) {
                count++;
            }
        }
        if (count == 1) {
            unicos++;
        }
    }
    printf("%d\n",unicos);
}

int main() {
    int n,i;
    scanf("%d",&n);
    int vetor[n];
    for (i = 0 ; i < n ; i++) {
        scanf("%d",&vetor[i]);
    }
    numerosunicos(vetor,n);
    return 0;
}