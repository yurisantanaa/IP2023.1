#include <stdio.h>
#define MAX 500

void RetornaUniversidadeLetra(char universidade[],int x) {
    int j;
    for (j = 0; j < x; j++) {
        printf("%c",universidade[j]);
    }
    printf("\n");
}


int main() {
    int n, i;
    int x;
    scanf("%d",&n);
    char universidade[MAX];
    getchar();
    for (i = 0 ; i < n ; i++) {
        scanf("%d%*c%[^\n]%*c",&x ,universidade);
        RetornaUniversidadeLetra(universidade,x);
    }
    return 0;
}