#include <stdio.h>
#include <stdbool.h>

bool temZero(int a, int b) {
    int i;
    char strNumero[20];
    char strNumero2[20];

    sprintf(strNumero, "%d", a);
    sprintf(strNumero2, "%d", b);

    for (i = 0; strNumero[i] != '\0'; i++) {
        if (strNumero[i] == '0') {
            return true;
        }
    }

    for (i = 0; strNumero2[i] != '\0'; i++) {
        if (strNumero2[i] == '0') {
            return true;
        }
    }

    return false;
}


int main () {
    int n, i;
    scanf("%d",&n);
    int ulta = 0, ultb = 0,a[n], b[n], inva = 0, invb = 0;


    for (i = 0 ; i < n ; i++) {
    scanf("%d %d", &a[i], &b[i]);
    }

        for (i = 0 ; i < n ; i++) {
            if (temZero(a[i], b[i]) || a[i] == b[i]) {
                break;
            }
            else {
                while (a[i] > 0 || b[i] > 0) {
                    ulta = a[i] % 10;
                    inva = inva*10 + ulta;
                    a[i] = a[i] / 10;

                    ultb = b[i] % 10;
                    invb = invb*10 + ultb;
                    b[i] = b[i] / 10;
                }
                if (inva >= invb) {
                    printf ("%d\n",inva);
                }
                else {
                    printf ("%d\n",invb);
                }
                inva = 0;
                invb = 0;
                }
            }

    return 0;
}