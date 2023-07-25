#include "complex.h"

int main() {
    Complex a,b,c;
    a = cp_new(2,3);
    b = cp_new(-1,5);
    c = cp_sum(a,b);
    cp_print(c,1);
    c = cp_mult(a,b);
    cp_print(c,1);
    c = cp_div(a,b);
    cp_print(c,1);
    cp_print(c,2);
    return 0;
}