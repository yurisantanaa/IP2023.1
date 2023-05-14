#include <stdio.h>
int main(){
    int num,inverso = 0 ,ultimo;
    scanf("%d",&num);
    if (num > 0 && num % 10 != 0){
        while (num > 0){
        ultimo = num % 10;
        inverso = inverso * 10 + ultimo;
        num /= 10;
        }
        printf("%d", inverso);
    }
    return 0;
}