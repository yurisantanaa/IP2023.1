#include <stdio.h>

void somaDivisores (int n) {
    int soma = 1;
    int i;
    printf("%d = 1 ", n);
    for (i = 2 ; i <= n - 1 ; i++) {
                if (n%i == 0) {
                    printf ("+ %d ", i);
                    soma += i;
                }
        }
    printf("= %d ", soma);
    if (soma == n) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
}


int main () {
    int n, soma;
    scanf("%d", &n);
    somaDivisores(n);
    return 0;
 }