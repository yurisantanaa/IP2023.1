#include <stdio.h>
int main () {
    int n, inverso, ultimo, aux;
    scanf("%d",&n);
    if (n > 99999){
        printf ("NUMERO INVALIDO");
    }
    else{
        aux = n;
        while (aux > 0){
            ultimo = aux % 10;
            inverso = inverso * 10 + ultimo;
            aux = aux / 10;
        }
        if (n == inverso){
            printf("PALINDROMO");
        }
        else{
            printf("NAO PALINDROMO");
    }
    }


    return 0;
}