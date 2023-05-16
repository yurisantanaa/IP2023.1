#include <stdio.h>
int main () {
    int n, i , j, k;
    scanf ("%d", &n);
    int v[n];
    for (i = 0; i < n ; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n ; i++) {
        if (v[i] > v[i + 1]) {
            k = 0;
        }
        else if (v[i] < v[i + 1]) {
            k += 1;
        }
    }

    printf("o comprimento do segmento crescente maximo e: %d", k);
    return 0;
}