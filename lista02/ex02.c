#include <stdio.h>


int fibonacci (int t1, int t2, int n) {
    unsigned long int temp = 0, i = 2;
    if (n == 1) return t1;
    else if (n == 2) return t2;
    else if (n > 2) {
        while (i < n) {
            temp = t1 + t2;
            if (t1 > t2) {
                t2 = temp;
            } else t1 = temp;
            i++;
        }
    }
    return temp;
}


int main () {
    int t1, t2, n, resultado;
    scanf ("%d %d %d", &t1, &t2, &n);
    resultado = fibonacci (t1, t2, n);
    printf("%d",resultado);
    return 0;
}