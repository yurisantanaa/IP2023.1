#include <stdio.h>
 
int fibonacci( int t1, int t2, int n){
    int t3 = 0;
    if(n == 1) return t1;
    if(n == 2) return t2;
    while(n>2){
    t3 = t1 + t2;
    t1 = t2;
    t2 = t3;
    n--;
    }
    return t3;
}
 
int main(){
    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);
    x = fibonacci(a, b, c);
    printf("%d\n", x);
    return 0;
}