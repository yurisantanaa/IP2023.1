#include <stdio.h>

int main() {
    int n, x;
    unsigned long int fat = 1;
    scanf("%d", &n);
    x = n;
        while (x > 0) {
            fat *= x;
            x--;
        }
    printf ("%d!  = %ld", n, fat);
    
    return 0;
}