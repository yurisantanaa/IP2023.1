#include <stdio.h>
#include <stdbool.h>
 
 
bool enumeroInvertivel (int i , int j , int n) {
    if (i*j == 1 || (i*j)%n == 1) {
        return true;
}
    else {
        return false;
    }            
}
    
 
int main () {
    int i,j;
    int n;
    
    scanf("%d",&n);
    for (i = 0 ; i < n ; i++) {
        for (j = 0 ; j < n ; j++) {
            if (enumeroInvertivel(i , j , n)) {
                if (i <= j) {
                    printf ("(%d,%d)\n", i, j);
                }
            }
        }
    }
 
    return 0;
}