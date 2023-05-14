#include <stdio.h>
int main (){
    int n, i, bin[8];
    scanf("%d", &n);



    if (n >= 0 && n <= 255){
        for (i = 7; i >= 0 ; i --){
            bin[i] = n%2;
            n = n/2;
        }  
        for (i = 0 ; i < 8 ; i++) 
         printf("%d", bin[i]);
        }




    else{
        printf("Numero invalido!");
    }
    return 0;
}