#include <stdio.h>
#include <math.h>
 

long int bin2dec (long int bin) {
    int ultimo;
    int soma = 0;
    int expoente = 0;
    if (bin < 0) {
        bin *= -1;
    }    
     while (1) {
        ultimo = bin % 10;
        soma += pow(2,expoente) * ultimo;
         expoente += 1;
        bin /= 10;  
        if(bin / 10 == 0) {
            ultimo = bin % 10;
            soma += pow(2,expoente) * ultimo;
            break;        
        }
    }
 
    return soma;
}
    
 
int main () {
    long int bin;
    int numero_inteiro;
    scanf("%ld", &bin);
    numero_inteiro = bin2dec(bin);
    if (bin < 0) {
        printf("-%d\n",numero_inteiro);
    }
    else {
        printf("%d\n",numero_inteiro);    
    }
 
 
 
    return 0;
}
