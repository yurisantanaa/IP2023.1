#include <stdio.h>
int main() {
    int n;
    double S, k = 1;
    scanf("%d", &n);

    if (n <= 0){
        printf("Numero invalido!");
    }
    else {
        while (k <= n) {
            S = S + 1/k;
            k += 1;
        }
    printf("%lf", S);
    }


    return 0;
}