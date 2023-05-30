#include <stdio.h>


long unsigned int fatorial (unsigned int n) {
    unsigned long int fat = 1;
    if (n == 0) {
        return 1;
    }
    else {
        while (n > 0) {
            fat *= n;
            n--;
        }
        return fat;
    }
}



int main () {
    unsigned long int fat;
    long int n;
    scanf("%ld", &n);
    fat = fatorial(n); 
    printf("%ld! = %ld\n",n , fat);
    return 0;
}