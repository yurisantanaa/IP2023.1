#include <stdio.h>
int main () {
    int m, n, l = 0, c = 0;
    scanf ("%d %d",&m, &n);

    if (m > 0 && n > 0) {
        for (l = 1 ; l <= m; l++ ) {
            for (c = 1 ; c <= n ; c++) {
                if (l > c) {
                    if ( l - c == 1 || c == n) {
                        printf ("(%d,%d)", l, c);

                    }
                    else {
                        printf ("(%d,%d)-", l, c);
                    }
                }
            }
            printf ("\n");
        }
    }



    return 0;
}