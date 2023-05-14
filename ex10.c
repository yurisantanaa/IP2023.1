#include <stdio.h>
int main () {
    int x, y, z;
    int a , b ,c;
    char A , B , C;
    int ordem [3];
    scanf("%d %d %d\n", &x, &y, &z);
    scanf("%c%c%c", &A ,&B ,&C);

    if (x <= 100 && y <= 100 && z <= 100) {
        if (x > y){
            if (x > z) {

                if(y > z) {
                    a = z;
                    b = y;
                    c = x;
                }
                else {
                    a = y;
                    b = z;
                    c = a;

                }
            }

            else {
                c = z;
                b = x;
                a = y;
            }

        }
        else {
            if (x > z) {
                a = z;
                b = x;
                c = y;
            }
            if (x < z) {
                if (y > z) {
                    a = x;
                    b = z;
                    y = c;
                }
                else {
                    a = x;
                    b = y;
                    c = z;
                }
            }
        }
    }
    

printf ("%d %d %d",a ,b ,c);
    return 0;

}



/*  printf("%d %d %d\n", x, y, z);
    printf("%c %c %c\n", a, b, c);z*/



