#include<stdio.h>
int main () {
int n, i = 1, j = 1, k = 1;
scanf("%d", &n);
if (n == 1) {
    printf("Campeonato invalido!\n");
}
else {
    while (i <= n) {
        if (i == j) {
            j +=1;
        }
        if (j > n) {
            j = 1;
            i += 1;
        }
        if (i < j) {
        printf("Final %d:   Time%d X Time%d\n", k, i, j);
        j += 1;
        k += 1;
        }
        else {
            j ++;
        }
    }

}




    return 0;
}