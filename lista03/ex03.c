#include <stdio.h>

void vetorinverso(int n) {
    int v[n];
    int i;
    int j;
    for (i = 0; i < n ;i++) {
        scanf("%d",&v[i]);
    }
    for (j = n - 1 ;j >= 0 ; j--) {
        printf("%d ", v[j]);
        if (j==0) printf("\n");
    }
}




int main() {
    int n;
    scanf("%d", &n);
    vetorinverso(n);



    return 0;
}