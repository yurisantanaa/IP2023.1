#include "imagem.h"

Image im_new(int w,int h) {
}
void im_free(Image I) {

}
void im_fill_bg(Image I,char cor);
void im_draw_hline(Image I,int x0,int y0,int xf,char cor);
void im_draw_vline(Image I,int x0,int y0,int yf,char cor);
void im_draw_rect(Image I,int x0,int y0,int xp,int yf,char cor);
void im_draw_rect_fill(Image I,int x0,int y0,int xf,int yf,char cor);
void im_write(Image I);