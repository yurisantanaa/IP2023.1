typedef struct complex Complex;

struct complex
{
    double r, i;
};

Complex cp_new (double r,double i);
Complex cp_sum (Complex a,Complex b);
Complex cp_mult (Complex a,Complex b);
Complex cp_div (Complex a,Complex b);
void cp_print(Complex c,int tipo);
