#include <stdio.h>
int main(){
    float a, b, c;
        scanf("%f %f %f", &a, &b, &c);
        if (a >= b && a <= c){
                printf("%.2f, %.2f, %.2f\n", b, a, c);
                }
        else if (a >= c && a <= b){
                printf("%.2f, %.2f, %.2f\n", c, a, b);
                }
                
                
        else if (b >= c && b <= a){
                printf("%.2f, %.2f, %.2f\n", c, b, a);
                }
        else if (b >= a && b <= c){
                printf("%.2f, %.2f, %.2f\n", a, b, c);
                }
                
                
        else if (c >= b && c <= a){
                printf("%.2f, %.2f, %.2f\n", b, c, a );
                }
        else if (c >= a && c <= b){
                printf("%.2f, %.2f, %.2f\n", a, c, b );
                }
                
                
    return 0;
    }