#include "imagem.h"


int main(){
    Image I;
    I = im_new(800,600);
    im_fill_bg(I,0);
    im_draw_hline(I,2,2,10,255);
    




    im_write(I);
    im_free(I);
    return 0;
}