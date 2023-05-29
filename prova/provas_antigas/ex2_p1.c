#include <stdio.h>
#include <string.h>


int contarDigitos(int senha) {
    char senhaString[20];
    sprintf(senhaString, "%d", senha); 
    return strlen(senhaString); 
}



int main () {
    char categoria[1] = {};
    int senha;
    scanf("%d %s", &senha ,categoria);

    if (categoria[0] != 'U' && categoria[0] != 'G' && categoria[0] != 'A') {
        printf("CATEGORIA INVALIDA: %s", categoria);
    }
    else {

        if (contarDigitos(senha) < 6) {
        printf("SENHA INVALIDA: %d - MINIMO 6 DIGITOS\n", senha);
        }
        else {
            if (categoria[0] == 'A' && senha == 321456) {
                printf("ACESSO PERMITIDO A CATEGORIA A\n");
            }
            else if (categoria[0] == 'G' && senha ==  9510753)  {
                printf("ACESSO PERMITIDO A CATEGORIA G\n");
            }
            else if (categoria[0] == 'U' && senha == 78955632) {
                printf("ACESSO PERMITIDO A CATEGORIA U\n");
            }
            else {
                printf("ACESSO NEGADO\n");
            }
        }

    }



    return 0;
}