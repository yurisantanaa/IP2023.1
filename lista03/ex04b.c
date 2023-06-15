#include <stdio.h>

#define CH_MAX 101+1

int  main() {
	int LED[10] = {6,2,5,5,4,5,6,3,7,6};
	char Num[CH_MAX]; // representar o numero
	int n; // quantidade de casos de teste
	int nled = 0;
	int k;
	int idx;

	scanf("%d", &n);
	while(n--) {
		scanf("%s", Num); // "112"\0
		nled = 0;
		k = 0;
		while(Num[k]!='\0') {
			idx = Num[k] - '0';
			nled += LED[idx];
			k++;
		}
		printf("%d leds\n", nled);
	}
	return 0;
}