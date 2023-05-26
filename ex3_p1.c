#include <stdio.h>

int DiaMax (int dia, int mes , int ano) {
    int diamax;
      if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            diamax = 31;
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                diamax = 30;
        }
        else {
            diamax = 28;
            if (ano % 4 == 0) {
                if (ano % 400 == 0) {
                    diamax = 29;
                }
                else if (ano % 100 == 0) {
                    diamax = 28;
                }
                else {
                diamax = 29;
                }
            }
        }
    return diamax;
}


int main () {
    int dia, mes, ano;
    int diamax;
    scanf("%d %d %d",&dia, &mes, &ano);

    if ( (ano < 1900 || ano > 2036) ) {
        printf ("DATA FORA DO INTERVALO ESTIPULADO");
    }
    else {
        diamax = DiaMax(dia, mes, ano);
        if ( dia > diamax || mes > 12 || mes < 1 || dia < 1 ) {
            printf("DATA INVALIDA");
        }
        else {
            printf("%d/%d/%d", dia, mes, ano);
        }
    }



    return 0;
}