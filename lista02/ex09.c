#include <stdio.h>


void converteEmNotasMoedas (int valor, int *n100, int *n50 , int *n10 , int *n1) {
    *n100 = valor / 100;
    valor = valor % 100;

    *n50 = valor / 50;
    valor = valor % 50;

    *n10 = valor / 10;
    valor = valor % 10;

    *n1 = valor / 1;
}


int main () {
    int n100,n50,n10,n1;
    int valor;
    scanf("%d",&valor);
    converteEmNotasMoedas(valor,&n100,&n50,&n10,&n1);
    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", n1);

    return 0;
}