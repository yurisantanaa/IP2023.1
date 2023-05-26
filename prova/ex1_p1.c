#include <stdio.h>


int RespostaSensores (double d1, double d2, double d3) {
    if (d1 == d2 && d1 == d3) {
        return 1;
    }
    else if (d1 < d2 && d1 < d3) {
        return 2;
    }
    else if (d3 < d1 && d3 < d2) {
        return 3;
    }
    else {
        return 4;
    }


}


int main () {
    double distancia1, distancia2, distancia3;
    int condicao;
    scanf("%lf %lf %lf", &distancia1, &distancia2, &distancia3);
        condicao = RespostaSensores(distancia1, distancia2, distancia3);
        switch (condicao) {
            case 1:
                printf("VOLTAR");
                break;
            case 2:
                printf("DIREITA");
                break;
            case 3:
                printf("ESQUERDA");
                break;
            case 4:
                printf("PARAR");
                break;
        }

    return 0;
}