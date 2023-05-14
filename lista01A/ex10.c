#include <stdio.h>
int main () {
    int x, y, z, n = 3;
    int temp, i, j;
    char l1 , l2 , l3;
    scanf("%d %d %d\n", &x, &y, &z);
    scanf("%c %c %c", &l1 ,&l2 ,&l3);
    int ordem[] = {x, y, z};
    char impressao[] = {l1, l2, l3}; 
    
    for (i = 0 ; i < n ; i++){
        for (j = 0 ; j < n - i - 1 ; j++){
            if (ordem[j] > ordem[j + 1]){
                temp = ordem[j];
                ordem[j] = ordem[j + 1];
                ordem[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n ; i++){
        if(impressao[i] == 'A'){
            impressao[i] = ordem[0];
        }
        else if (impressao [i] == 'B') {
            impressao[i] = ordem[1];
        }
        else {
            impressao[i] = ordem[2];
        }
    }

    for (i = 0; i < n ; i++){
        if (i < 3){
            printf ("%d ", impressao[i]);
        }
        else {
            printf ("%d", impressao[i]);
        }
    }

    return 0;
}