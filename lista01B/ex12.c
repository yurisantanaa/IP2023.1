#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100000

bool eInt(float hipotenusafloat) {
    int parteint = (int)hipotenusafloat;
    if (hipotenusafloat - parteint == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int hipotenusa_max;
    int i, j, p = 0, temp, numero_de_hipotenusas = 0; // contadores
    int cateto1[MAX], cateto2[MAX], hipotenusa[MAX]; // catetos e hipotenusa
    double hipotenusafloat; // float hipotenusa
    
    scanf("%d", &hipotenusa_max);
    
    for (i = 0; i < MAX; i++) {
        cateto1[i] = i + 1;
        cateto2[i] = i + 1;

    
    if (hipotenusa_max > 0) {
        for (j = 0; j < hipotenusa_max; j++) {
            for (i = j; i < hipotenusa_max; i++) {
                hipotenusafloat = sqrt((cateto1[j] * cateto1[j]) + (cateto2[i] * cateto2[i]));
                if (eInt(hipotenusafloat)) {
                    cateto1[p] = cateto1[j];
                    cateto2[p] = cateto2[i];
                    hipotenusa[p] = (int)hipotenusafloat;
                    p++;
                    numero_de_hipotenusas++;
                }
            }
        }
    
        for (p = 0; p < numero_de_hipotenusas - 1; p++) {
            for (i = 0; i < numero_de_hipotenusas - p - 1; i++) {
                if (hipotenusa[i] > hipotenusa[i + 1]) {
                    temp = hipotenusa[i];
                    hipotenusa[i] = hipotenusa[i + 1];
                    hipotenusa[i + 1] = temp;

                    temp = cateto1[i];
                    cateto1[i] = cateto1[i + 1];
                    cateto1[i + 1] = temp;

                    temp = cateto2[i];
                    cateto2[i] = cateto2[i + 1];
                    cateto2[i + 1] = temp;
                }
            }
        }
        
        for (p = 0; p < numero_de_hipotenusas; p++) {
            if (hipotenusa[p] <= hipotenusa_max && hipotenusa[p] > 0) {
                printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa[p], cateto1[p], cateto2[p]);
            }
        }
    }
    
    return 0;
}