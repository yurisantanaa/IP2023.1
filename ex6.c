#include <stdio.h>
#include <math.h>

int main() {
   	int a, b, c;
   	float delta, raiz1, raiz2;
   	scanf("%d %d %d", &a, &b, &c);
	delta = b*b - 4*a*c;
	raiz1 = (-b + sqrt(delta))/(2*a);
	raiz2 = (-b - sqrt(delta))/(2*a);

   	if (delta > 0){	
		if (raiz1 > raiz2){
			float temp = raiz1;
			raiz1 = raiz2;
			raiz2 = temp;
		}
		printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", raiz1, raiz2);
	}


	else if (delta == 0){
		printf("RAIZ UNICA\nX1 = %.2f\n",raiz1);
	}
	

	else if (delta < 0){
		printf("RAIZES IMAGINARIAS\n");
	}
	
return 0;
}