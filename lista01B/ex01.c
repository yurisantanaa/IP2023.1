#include <stdio.h>
int main() {
    int n, i;
    double F,C;
    i = 0;
    
    scanf("%d",&n);
    while (i < n) {
        scanf("%lf",&F);
        C =5*(F - 32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
        i++;
    }
    
    
return 0;
}
    