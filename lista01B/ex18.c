#include <stdio.h>
#include <stdbool.h>

    bool primo(int i) {
        if (i == 2 || i==3 | i==5 || i==7 || i==11){
            return true;
        }
        else if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0) {
            return true;
        }
        else {
            return false;
        }
    }


int main () {
    int n, div;
    int i = 2;
    
 
    scanf("%d",&n);
    if (n > 1) {
        printf("%d = ", n);
        while (n >= i) {   
            if (primo(i)) {
                while (n % i == 0) {   
                    printf("%d",i);
                    n = n/i;
                    if (n != 1){
                        printf(" x ");
                    }
                    else {
                        printf("\n");
                    }
                }
            }
            i++;
        }
    }
    else {
        printf("Fatoracao nao e possivel para o numero %d\n",n);
    }
 
 
 
    return 0;
}