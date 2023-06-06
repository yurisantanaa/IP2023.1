#include <stdio.h>

#define N_MAX 100000

int main() {
	int i, k, x;
	int V[N_MAX];
	int N;
	int M; 
	scanf("%d", &N);
	for(i=0;i<N;i++) {
		scanf("%d", &V[i]);
	}
	scanf("%d", &M);
	
	for(i=0;i<M;i++) {
		scanf("%d", &x);
		for(k=0;k<N;k++) {
			if(x==V[k]) {
				printf("ACHEI\n");
				break;
			}
		}
		if(k==N) printf("NAO ACHEI\n");
	}
	return 0;
}