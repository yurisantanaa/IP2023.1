#include <stdio.h>
int main () {
    float a, b, c, temp;
    unsigned int i;
    unsigned int  n = 3, j = 0, I = 0;
    scanf("%d %f %f %f", &i, &a, &b, &c);
    float v[3] = {a,b,c};
    switch (i){
        case 1:
            for (I = 0 ; I < n ; I++){
                for (j = 0 ; j < n-I-1 ; j++ ){
                    if (v[j] > v[j +1]){
                        temp = v[j];
                        v[j] = v[j+1];
                        v[j + 1] = temp;
                    }    
                }   
            }
            for (j = 0 ; j < n ; j++){
            printf("%.2f ",v[j]);
            }
            break;
        case 2:
            for (I = 0 ; I < n ; I++){
                for (j = 0 ; j < n-I-1 ; j++ ){
                    if (v[j] < v[j +1 ]){
                        temp = v[j];
                        v[j] = v[j+1];
                        v[j + 1] = temp;
                    }    
                }   
            }
            for (j = 0 ; j < n ; j++){
            printf("%.2f ",v[j]);
            }
            break;
        case 3:
         for (I = 0 ; I < n ; I++){
            for (j = 0 ; j < n-I-1 ; j++ ){
                    if (v[j] > v[j +1 ]){
                        temp = v[j];
                        v[j] = v[j+1];
                        v[j + 1] = temp;
                    }    
            }
        }
         
            temp = v[1];
            v[1] = v[2];
            v[2] = temp;

            temp = v[0];
            v[0] = v[2];
            v[2] = temp;
         

            for (j = 0 ; j < n ; j++){
            printf("%.2f ",v[j]);
            }
            break;
    }


    return 0;
}