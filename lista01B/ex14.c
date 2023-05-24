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

void RetornaDivisores(int n) {
    int i;
    for (i = 1; i < n ; i++) {
        if (n%i == 0) {
            if (i != n-1 && i != 1) {
                printf("+ ");
            }
            printf("%d ",i);
        }
    }

}


int main () {
    int n;
    int somadiv;
    scanf("%d", &n);
    somadiv = RetornaSomaDivisores(n);
    if (somadiv == n){
        printf("%d = ",n);
        RetornaDivisores(n);
        printf("= %d (NUMERO PERFEITO)",n);
    }
    else {
        printf("%d = ",n);  
        RetornaDivisores(n);
        printf("= %d (NUMERO NAO E PERFEITO)",somadiv);
    }
    return 0;
}