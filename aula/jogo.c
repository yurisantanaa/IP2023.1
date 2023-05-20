#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int STATUS;
#define STATUS_INIT     0
#define STATUS_EXEC     1
#define STATUS_ENDGAME  2

int MIN_VAL;
int MAX_VAL;
int N_TENTATIVAS;



void init_game(void) {
    srand(time(0));
    MIN_VAL = 0;
    MAX_VAL = 10;
    N_TENTATIVAS = 3;
    STATUS = STATUS_INIT;
}




void tela_apresentacao(void) {
	printf(
		"-----------------------------------------------\n"
		"-----BEM VINDO AO JOGO DE ADVINHE O NUMERO-----\n"
		"-----------------------------------------------\n"
		"\n\n\n\n\n");
	sleep(2);	
}


void tela_endgame(void) {
    printf(
        "------------------------------------------------\n"
        "--------------------Acabô =(--------------------\n"
        "------------------------------------------------\n"
    );
}


int menu_tela_conf(void) {
    int op;
    printf("1)Definir intervalo\n");
    printf("2)Definir tentativas\n");
    printf("3)PLAY\n");
    printf("4)Sair\n");
    scanf("%d", &op);
    return op;
}


int tela_conf(void) {
    int k;
    while (1) {
        k = menu_tela_conf();
        switch ( k ) {
        case 1:
            printf("Entre com os valores min e max");
            scanf ("%d %d",&MIN_VAL, &MAX_VAL);
            break;
        case 2:
            printf("Entre com a quantidade de tentativas: ");
			scanf("%d", &N_TENTATIVAS);
            break;
        default:
            printf("Opcao Invalida\n");
            break;
        case 3:
            STATUS = STATUS_EXEC;
            break;
        case 4:
            STATUS = STATUS_ENDGAME;
            break;
        }
    if (k == 3 || k == 4) break;
    }
}


void tela_game_state(int nt, int last_n) {
    printf(
        "===================================\n"
        "= Nr de tentativas restantes = %d =\n"
        "=== Ultimo numero tentado = %d ====\n"
        "===================================\n"
        , N_TENTATIVAS - nt, last_n); 


}

int main() {
    int N;
    int nt;
    int x = 0;
    int last_n;

    init_game();
    tela_apresentacao();

    while (STATUS == STATUS_INIT) {
        tela_conf();
        if ( STATUS == STATUS_ENDGAME ) {
            tela_endgame();
            return 0;
        }

        N = rand() % (MAX_VAL+1 - MIN_VAL) + MIN_VAL;
        nt = 0;

        while ( STATUS == STATUS_EXEC) {
            
            if (nt == N_TENTATIVAS){
                printf("Perdeu =()\nO numero era: %d\n", N);
                break;
            }
            
            tela_game_state(nt, last_n );
            printf("digite um numero: ");
            scanf("%d", &x);
            printf("\n\n");


            if (N > x) {
                printf("Digite um numero maior\n");
            }
            else if (N < x){
                printf("Digite um numero menor\n");
            }
            else {
                printf("Parabens voce acertou!!!\n");
                break;
            }
            nt++;
            last_n = x;
        }
        STATUS == STATUS_INIT;
    }
    return 0;
}