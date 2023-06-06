#include <stdio.h>



void print_bits (void * ptr) {
    unsigned char *pc = ptr;
    unsigned char v = *pc;
    int i;
    pc = (unsigned char*)ptr;
    int peso = 128;
    for (i=0; i<8;i++) {
        printf("%d",v/peso);
        v = v%peso;
        peso = peso/2;
    }

}


void print_bytes(const void* p,int n) {
    char *pc = (char*) p;
    int i;
    for (i = 0 ; i<n ; i++) {
        print_bits(pc + i);
         printf(" ");
    }
}


int main () {
    unsigned int ui;
    unsigned short us;
    unsigned char uc;
    double d;
    float f;

    scanf("%lf",&d);
    uc = us = ui = f = d;

    print_bytes(&uc,sizeof(char));
    printf("\n");
    print_bytes(&us,sizeof(short));
    printf("\n");
    print_bytes(&ui,sizeof(int));
    printf("\n");
    print_bytes(&f,sizeof(float));
    printf("\n");
    print_bytes(&d,sizeof(double));
    printf("\n"); 
    return 0;
}