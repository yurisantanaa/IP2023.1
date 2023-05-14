#include <stdio.h>

int main() {
    int x, fat = 1;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &x);
    
    if (x < 0) {
        printf("Número inválido\n");
    }
    else {
        while (x > 0) {
            fat *= x;
            x--;
        }
        printf("O fatorial de %d é %d\n", x+1, fat);
    }
    
    return 0;
}
