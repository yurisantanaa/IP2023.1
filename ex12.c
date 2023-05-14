#include <stdio.h>
int main () { 
    float renda, rendapc, salmin;
    int ecod, es, qtd;
    scanf("%f %d %d %d", &renda, &qtd, &es, &ecod);
    rendapc = renda/qtd;
    salmin = 937.00 * 1.5;

    if (es == 2 && rendapc <= salmin && ecod == 4){ 
        printf("ALUNO COTISTA (L1)");
    }
    else if (es == 2 && rendapc <= salmin && (ecod == 1 || ecod == 2 ||ecod == 3)){
        printf("ALUNO COTISTA (L2)");
    }
    else if (es == 2 && (ecod == 1  || ecod ==  2 || ecod == 3)){
        printf("ALUNO COTISTA (L4)");
    }
    else if (es == 2){
        printf("ALUNO COTISTA (L3)");
    }
    else{
        printf("ALUNO NAO COTISTA");
    }

    return 0;
}