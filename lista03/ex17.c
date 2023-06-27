#include <stdio.h>
#include <math.h>

void ComparaPontos(double vetor[],double vetorcomparado[]) {
    int k;
    double maior = 0;
    double x, y, z;
        x = vetor[0] - vetorcomparado[0];
        y = vetor[1] - vetorcomparado[1];
        z = vetor[2] - vetorcomparado[2];
        double xyz[3] = {x, y, z};
        for (k = 0; k < 3; k++) {
            if (fabs(xyz[k]) > maior) {
                maior = xyz[k];
            }
        }
        printf("%.2lf\n",fabs(maior));
}


int main() {
    int n, i,l;
    double vetor[3],vetorcomparado[3];
    scanf("%d",&n);
    for (i = 0; i < n - 1 ; i++) {
        if (i == 0) scanf("%lf %lf %lf",&vetor[0],&vetor[1],&vetor[2]);
        scanf("%lf %lf %lf",&vetorcomparado[0],&vetorcomparado[1],&vetorcomparado[2]);
        ComparaPontos(vetor,vetorcomparado);
        for (l = 0;l < 3;l++) {
            vetor[l] = vetorcomparado[l];
        }
    }
    return 0;
}