#include <stdio.h>

int numero_leds(int j) {
    int count = 0;
    int ultimo;
    while (j>0) {
        ultimo = j % 10;
        j = j/10;
        switch (ultimo) {
            case 1:
                count += 2;
                break;
            case 2:
                count += 5;
                break;
            case 3:
                count += 5;
                break;
            case 4:
                count += 4;
                break;
            case 5:
                count += 5;
                break;
            case 6:
                count += 6;
                break;
            case 7:
                count += 3;
                break;
            case 8:
                count += 7;
                break;
            case 9:
                count += 6;
                break;
            case 0:
                count += 6;
                break;
        }
    }
    return count;
}


int main () {
    int n;
    int i = 0;
    scanf("%d",&n);
    int v[n];
    do {
        scanf("%d", &v[i]);
        printf("%d leds\n", numero_leds(v[i]));
        i++;
    } while (i<n);
    return 0;
}

