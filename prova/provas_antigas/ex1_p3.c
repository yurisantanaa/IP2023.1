#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char frases[500];
    while (scanf("%[^\n]%*c",frases) != EOF) {
    int count = 0;
    size_t i;
        char ultimo = tolower(frases[0]);
        bool jafoi = false;
        for (i = 0 ; i < strlen(frases) ; i++) {
            frases[i] = tolower(frases[i]);
            if (frases[i] == ' ') {
                if (ultimo == frases[i + 1] && jafoi == false) {
                    count++;
                    jafoi = true;
                }else if (ultimo != frases[i + 1]) jafoi = false;
                ultimo = frases[i + 1];
            }
        }
        printf("%d\n",count);
    }
    return 0;
}