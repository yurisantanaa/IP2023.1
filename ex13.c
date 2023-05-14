#include <stdio.h>
#include <math.h>
int main () {
int a, b, c;
float raiz1, raiz2, delta;
scanf("%d %d %d",&a, &b, &c);
delta = b*b - 4*a*c;
raiz1 = (-b + sqrt(delta))/(2*a);
raiz2 = (-b - sqrt(delta))/(2*a);





if ( (raiz1 <= 5 && raiz1 >= -5) && (raiz2 <= 5 && raiz2 >= -5) ) {
   
    if (delta >= 0){	
        printf("POSICOES: X1=%.2f e X2=%.2f\n", raiz1, raiz2);
    }
    else {
		printf("POSICOES IMAGINARIAS\n");
    }


    if ((a + b + c) % 3 == 0){
        printf("FATO1: DESAPARECIDA\n");
    }
    if((c % 2 == 0) && (c < a + b))
        printf("FATO2: ORIGEM\n");

}


else {
    if (delta >= 0){
        printf("POSICOES: X1=%.2f e X2=%.2f (FORA DO EXPERIMENTO)\n", raiz1, raiz2);
        if ((a + b + c) % 3 == 0){
           printf("FATO1: DESAPARECIDA\n");
        }
        if((c % 2 == 0) && (c < a + b)){
          printf("FATO2: ORIGEM\n");
        }
    }
    else{
        printf("POSICOES IMAGINARIAS\n");
    }




}
    return 0;
}