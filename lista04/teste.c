#include <stdio.h>
#include <stdbool.h>

bool ehPermutacao(int matriz[500][500], int n, int *soma) {
    int i, j;
    int valores[n*n + 1]; // Array para verificar se há valores repetidos
    for (i = 0; i <= n*n; i++) {
        valores[i] = 0; // Inicializa com zero
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            (*soma) += matriz[i][j];
            if (matriz[i][j] < 1 || matriz[i][j] > n*n || valores[matriz[i][j]] == 1) {
                return false; // Valor inválido ou repetido encontrado
            }
            valores[matriz[i][j]] = 1; // Marca o valor como encontrado
        }
    }

    return true;
}

int main() {
    int n, soma = 0;
    int *psoma = &soma;
    int i, j;
    scanf("%d", &n);
    int matriz[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    if (ehPermutacao(matriz, n, psoma)) {
        printf("%d\n", soma);
    } else {
        printf("Nao eh permutacao!\n");
        printf("%d\n", soma);
    }
    return 0;
}
