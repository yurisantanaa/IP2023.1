#include <stdio.h>
int main(){
    int n1,n2,n3,quadrado,nr;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > 9 || n2 > 9 || n3 > 9){
        printf ("DIGITO INVALIDO\n");
    }else{
        nr = n1*100 + n2*10 + n3;
        quadrado = nr * nr;
        printf("%d, %d\n", nr,quadrado );
        }
    return 0;
}