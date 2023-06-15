#include <stdio.h>
#include <string.h>
#define MAX 10000


void numeroDeVogaisLetrasConsoantes(char frase[MAX]) {
    char vogais[] = "AEIOUaeiou";
    char consoantes[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTUVWXYZ";
    int x = 0, y = 0, z = 0, j, i, k;
   
    for (j = 0 ; j <= strlen(frase) ; j++) {
        if (frase[j] != '\0') {
            for (i = 0 ; i <= strlen(consoantes) ; i++) {

                if (frase[j] == consoantes[i]) {
                    x++;
                    z++;
                    break;
                }

                else if (frase[j] == vogais[i]) {
                    x++;
                    y++;
                    break;
                }

            }
        }
    }
    printf("Letras = %d\n", x);
    printf("Vogais = %d\n", y);
    printf("Consoantes = %d\n", z);
}



int main() {
    int N;
    int i;
    char frase[MAX];
    scanf("%d",&N);
    getchar();
    for (i = 0 ; i < N; i++) {
        scanf("%[^\n]%*c", frase);
        numeroDeVogaisLetrasConsoantes(frase);
    }
    return 0;
}