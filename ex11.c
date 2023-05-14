#include <stdio.h>
int main () {
    int i, n = 4, j;
    float temp;
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float v[4] = {a, b, c, d};
   
        for (i = 0; i < n ; i++) {
            for (j = 0; j < n-i-1; j++) {    
                if (v[j] > v[j + 1]){
                    temp = v [j];
                    v [j] = v [j + 1];
                    v [j + 1] = temp;
                }
            }
        }

    printf("%.2f, %.2f, %.2f, %.2f", v[0], v[1], v[2], v[3]);
    return 0;
}