#include <stdio.h>

void separaDigitos (int numero);

int main () {
    int numero;
    do {
        scanf("%d", &numero);
    } while (numero > 1000 || numero < 0 || numero%10 == 0);
    separaDigitos(numero);

    return 0;
}



void separaDigitos (int numero) {
    int digito;
    while (numero > 0) {
        digito = numero % 10;
        numero /= 10;
        printf("%d", digito);
    }
}
