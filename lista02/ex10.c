#include <stdio.h>


double compute_pi (int n) {
    double pi = 1;
    double k = 2;
    int i = 1;
    while (i <= n) {
        if (i%2 == 0){
            pi *= k/(k+1);
            k +=2; 
        }    
        else pi *= k/(k-1);
        i++;
    }
    return pi*2;
}

int main () {
    int n;
    double pi;
    scanf("%d", &n);
    pi = compute_pi(n);
    printf("%.12lf\n", pi);

    return 0;
}