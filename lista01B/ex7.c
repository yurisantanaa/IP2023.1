#include <stdio.h>
#define MAX 10000
int main () {
    int j = 0, i, ni = 0, np = 0, num;
    float si = 0, sp = 0, mi, mp;
    int v[MAX];
    
    while (1){
        scanf("%d",&num);
        if (num == 0){
            break;
        }
        v [j] = num;
        j += 1;
    }
    
    
    for (i = 0; i < j; i++){    
        if (v[i] % 2 == 0) {
            np += 1;
            sp += v[i];
        }
        else {
            ni += 1;
            si += v[i];
        }
    }
    
    
    if (np == 0){
        np = 1;
    }
    if (ni == 0){
        ni = 1;
    }
    
    
    mp = sp/np;
    mi = si/ni;
    printf("MEDIA PAR: %f\nMEDIA IMPAR: %f\n", mp, mi);
        
    return 0;
}