#include <stdio.h>

    int menu(void) {
    int op;
    printf(" 1) Soma\n");
    printf(" 2) Subtracao\n");
    printf(" 3) Multiplicacao\n");
    printf(" 4) Divisao\n");
    printf(" 5) Negativo\n");
    printf(" 6) Sair\n");
    scanf("%d", &op);
    return op;
    }


    //funcao soma
    void fsum(void) {
    int qtd;
    double n;
    double soma;

    printf("Digite a quantidade de numeros: ");
    do{
        scanf("%d", &qtd);
        if(qtd<1) {
        printf("Digite um numero valido maior que 0: ");
        }
    } while(qtd<1);

    soma = 0;
    while(qtd--) {
        scanf("%lf", &n);
        soma += n;
    }

    printf("Valor da soma: %lf\n", soma);
    }    


    //funcao subtracao
    void fsub(void) {
    int qtd, x;
    double n;
    double sub;

    printf("Digite a quantidade de numeros: ");
    do{
        scanf("%d", &qtd);
        x = qtd;
        if(qtd<1) {
        printf("Digite um numero valido maior que 0: ");
        }
    }while(qtd<1);

    sub = 0;
    while(qtd > 0) {
        scanf("%lf", &n);
          if (qtd == x){
            sub = n;
        }
        else {
            sub -= n;
        }
        qtd --;
    }

    printf("Valor da subtracao: %lf\n", sub);

    }


    //funcao multiplicacao
    void fmulti(void) {
    int qtd;
    double n;
    double multiplicacao;

    printf("Digite a quantidade de numeros: ");
    do{
        scanf("%d", &qtd);
        if(qtd < 1) {
        printf("Digite um numero valido maior que 0: ");
        }
    } while(qtd < 1);

    multiplicacao = 1;
    while(qtd--) {
        scanf("%lf", &n);
        multiplicacao *= n;
    }
    printf("Valor da multiplicao: %lf\n", multiplicacao);
    }


    //funcao divisao
    int fdiv(void) {
    int qtd, x;
    double n;
    double divisao;

    printf("Digite a quantidade de numeros: ");
    do{
        scanf("%d", &qtd);
        x = qtd;
        if(qtd < 1) {
        printf("Digite um numero valido maior que 0: ");
        }
    } while(qtd < 1);

    divisao = 1;
    while(qtd > 0) {
        scanf("%lf", &n);
        if (qtd == x){
            divisao = n;
        }
        else {
            if (n == 0){
                printf("impossivel dividir por 0\n");
                return 0;
            }
            else {
                divisao /= n;
            }
        }
        qtd --;
    }
    printf("Valor da divisao: %lf\n", divisao);
    }


    //funcao negativo
    void fneg(void) {
        int n;
        printf("digite o numero para ter o negativo: ");
        scanf("%d", &n);
        n *= -1;
        printf("o valor negativo: %d\n", n);
    }




    int main() {
    int k;
    while(1) {
        k = menu();
        if(k==6) break;
        if(k==1) {
            fsum();
        }
        else if( k == 2 ) {
            fsub();
        }
        else if (k == 3) {
            fmulti();
        }
        else if (k == 4) {
            fdiv();
        }
        else if (k == 5) {
            fneg();
        }
        else {
    printf("Operacao nao disponivel ainda!\n");
    }

    }
    printf("Tchau!!!\n");

    return 0;

    }
