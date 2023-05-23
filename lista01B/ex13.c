#include <stdio.h>


void ip( int n ) {
	int n3 = n*n*n;
	int i, k;
	int soma;

	i = 1;
	while(1) {
		soma = 0;
		for(k=0;k<n;k++) { // 0,1,2,3,...,n-1
			soma += i+2*k;
		}
		if( soma == n3 ) {
			for(k=0;k<n;k++) {
				if(k!=0) printf("+");
				printf("%d", i+2*k);
			}
			return;
		}
		i+=2;
	}
}

int main() {

	int m;
	int i;
	scanf("%d", &m);
	for(i=1;i<=m;i++) {
		printf("%d*%d*%d = ", i,i,i);
		ip(i);
		printf("\n");
	}
	return 0;
}