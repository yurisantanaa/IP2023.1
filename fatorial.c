#include <stdio.h>

int main() {
    int num, i;
    unsigned long int fat = 1;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);
    if(num > 0){
        for(i = 1; i <= num; i++) {
            fat *= i;
        }
    printf("O fatorial de %d é %li", num, fat);
    }

    else if (num == 0){
    printf("fatorial de 0 eh 1");
    }

    else{
        printf("numero invalido");
    }

    
    return 0;
}
