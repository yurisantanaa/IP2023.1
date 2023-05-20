#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100000

bool eInt(float h) {
    int parteint = (int)h;
    if (h - parteint == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int hipotenusa_max;
    int i, j, p = 0, temp, numero_de_hipotenusas = 0; // contadores
    int c1[MAX], c2[MAX], hi[MAX]; // catetos e hipotenusa
    double h; // float hipotenusa
    
    scanf("%d", &hipotenusa_max);
    
    for (i = 0; i < MAX; i++) {
        c1[i] = i + 1;
        c2[i] = i + 1;
    }
    
    if (hipotenusa_max > 0) {
        for (j = 0; j < hipotenusa_max; j++) {
            for (i = j; i < hipotenusa_max; i++) {
                h = sqrt((c1[j] * c1[j]) + (c2[i] * c2[i]));
                if (eInt(h)) {
                    c1[p] = c1[j];
                    c2[p] = c2[i];
                    hi[p] = (int)h;
                    p++;
                    numero_de_hipotenusas++;
                }
            }
        }
    
        for (p = 0; p < numero_de_hipotenusas - 1; p++) {
            for (i = 0; i < numero_de_hipotenusas - p - 1; i++) {
                if (hi[i] > hi[i + 1]) {
                    temp = hi[i];
                    hi[i] = hi[i + 1];
                    hi[i + 1] = temp;

                    temp = c1[i];
                    c1[i] = c1[i + 1];
                    c1[i + 1] = temp;

                    temp = c2[i];
                    c2[i] = c2[i + 1];
                    c2[i + 1] = temp;
                }
            }
        }
        
        for (p = 0; p < numero_de_hipotenusas; p++) {
            if (hi[p] <= hipotenusa_max && hi[p] > 0) {
                printf("hipotenusa = %d, catetos %d e %d\n", hi[p], c1[p], c2[p]);
            }
        }
    }
    
    return 0;
}