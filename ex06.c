#include <stdio.h>

void qualONumero(char numeroextenso[]) {
    int i;
    int count1 = 0, count2 = 0, count3 = 0;
    char um[3] = {"one"};
    char dois[3] = {"two"};
    char tres[5] = {"three"};
    for (i = 0; i <= 4 ; i++) {
        if (um[i] != numeroextenso[i] && i < 3) {
            count1++;
        }

        if (dois[i] != numeroextenso[i] && i < 3) {
                count2++;
        }

        if (tres[i] != numeroextenso[i] && i < 5) {
            count3++;
        }
    }
            if (count1 < 2) printf("1\n");
            if (count2 < 2) printf("2\n");
            if (count3 < 2) printf("3\n");
}

int main() {
    int n;
    char numerodigitado[5];
    scanf("%d",&n);
    do {
        scanf("%s", numerodigitado);
        qualONumero(numerodigitado);
        n--;
    }while (n > 0);

    return 0;
}