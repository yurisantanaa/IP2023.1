#include <stdio.h>

typedef struct polinomios{
    double c;
    int e;
}Polinomio;

Polinomio LerPolinomio(void){
    int i,n;
    scanf("%d",&n);
    Polinomio p,vetor[n];
    for (i = 0;i < n;i++){
        scanf("%lf",&p.c);
        scanf("%d",&p.e);
        vetor[i] = p;
    }
    return *vetor;
}

Polinomio SomaPolinomios(Polinomio a,Polinomio b) {
    Polinomio c;
    return c;
}

Polinomio SubtraiPolinomios(Polinomio a,Polinomio b) {
    Polinomio c;
    return c;

}


void print_polinomios(Polinomio c) {
    int i,maior_exp;
    for (i = maior_exp;i >= 0;i--){
        if (c.c > 0) {
            printf("%lf^%d\n",c.c,c.e);
        }
    }
}


int main(){
    Polinomio a,b,c;
    int n;
    char op;
    scanf("%d",&n);
    while(n > 0) {
        getchar();
        scanf("%c",&op);
        if (op == '+') {
            a = LerPolinomio();
            b = LerPolinomio();
            c = SomaPolinomios(a, b);
            print_polinomios(c);
        }

        else if (op == '-') {
            a = LerPolinomio();
            b = LerPolinomio();
            c = SomaPolinomios(a, b);
            print_polinomios(c);
        }
        n--;
    }
    return 0;
}