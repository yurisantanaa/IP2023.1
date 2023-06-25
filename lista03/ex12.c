#include <stdio.h>
#define MAX 500

int main() {
    int n, i, j;
    int x;
    scanf("%d",&n);
    char universidade[MAX];
    getchar();
        for (i = 0; i < n; i++) {
            scanf("%d%*c%[^\n]%*c",&x ,universidade);
            for (j = 0; j < x ; j++) {
                printf("%c",universidade[j]);
            }
        }
    return 0;
    }