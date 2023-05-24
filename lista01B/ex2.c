#include <stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    i = 2;
    while (i <= n) {
    printf("%d^2 = %d\n",i,i*i);
    i += 2;
    }
    
    
    return 0;
}