#include <stdio.h>
#include <string.h>
#define MAX 1001

void inverte(char vetor[]) {
    int k, temp;
    int fim = strlen(vetor) - 1;
    for (k = 0; k < strlen(vetor)/2; k++) {
        temp = vetor[k];
        vetor[k] = vetor[fim];
        vetor[fim] = temp;
        fim--;
    }
}


void criptografia(char vetor[]) {
    int j, i;
    //passo 1
    for(j = 0; j < strlen(vetor) ; j++) {
        if ((vetor[j] >= 65 && vetor[j] <= 90) || (vetor[j] >= 97 && vetor[j] <= 122 )) {
            vetor[j] += 3;
        }
    }
    //passo 2
    inverte(vetor);
    //passo 3
    for (i = strlen(vetor)/2; i < strlen(vetor);i++) {
        vetor[i] -= 1;
    }
    printf("%s\n",vetor);
}



int main() {
    int N;
    int i;
    char texto[MAX] = "";
    scanf("%d",&N);
    getchar();
    for (i = 0 ; i < N ; i++){
        scanf("%[^\n]%*c", texto);
        criptografia(texto);
    }   
    return 0;
}