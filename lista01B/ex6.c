#include <stdio.h>
int main () {
    int n, i , k = 1, s = 0, x = 0;
    do {
        scanf ("%d", &n);
    }while (n <= 0);
    int v[n];
    for (i = 0; i < n ; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n ; i++) {
        if (v[i] <= v[i + 1]) {
            k += 1;
            if (k > s){
                s = k;
            }
        }
        else {
            k = 1;
        }
    
    }

    printf("O comprimento do segmento crescente maximo e:   %d", s);
    return 0;
}