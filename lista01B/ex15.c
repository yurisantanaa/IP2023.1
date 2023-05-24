#include <stdio.h>

int RetornaSomaDivisores(int n) {
    int pd = n;
    int soma = 0;
    while (pd >= 1) {
        if (pd != n && n%pd == 0) {
            soma += pd;
        }
        pd --;
    }
    return soma;
}



int main() {
    int n ,pares = 0;
    int n1 = 1, n2 = 1;
    int soma_div_n1, soma_div_n2;
    int x;
    scanf("%d", &n);


    while (pares < n) {

        soma_div_n1 = RetornaSomaDivisores(n1);
        n2 = soma_div_n1;
        soma_div_n2 = RetornaSomaDivisores(n2);

        if (soma_div_n1 == n2 && soma_div_n2 == n1 && n1 != n2 && n1 < n2) {
            printf("(%d,%d)\n", n1, n2);
            pares += 1;
        }
        
    n1 ++;
    }
    return 0;
}