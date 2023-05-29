#include <stdio.h>
#include <math.h>
 

int fatorial(int i) {
    float fat = 1;
    if (i == 0) {
        return 1;
    }
    else {
        while (i > 0){
            fat *= i;
            i--;
        }
        return fat;
    } 
}
 
 

int main () {
    int linha_inicial, linha_final, linha_n;
    int p = 0, i;
     scanf("%d %d",&linha_inicial, &linha_final);
 
    for (i = linha_inicial; i <= linha_final ; i++) {
        for (p = 0 ; p <= i ; p++) {
            linha_n = fatorial(i)/( fatorial(p)*(fatorial(i-p) ));
            printf("%d",linha_n);
            if (p != i){
                printf(",");    
            }
            else  {
                printf("\n");        
            }
        }        
    }
  
    return 0;
}
