#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
 
int main() {
    char str;
    bool erauper = false;
 
    while (scanf("%c",&str) != EOF) {
        if (str != ' ') {
            if (str == '\n') {
                erauper = false;
                printf("%c",str);
            }
            else {
                if (erauper == false) {
                    printf("%c", toupper(str));
                    erauper = true;
                } else {
                    printf("%c", str);
                    erauper = false;
                }
            }
        }
        else printf(" ");
    }
    return 0;
}
