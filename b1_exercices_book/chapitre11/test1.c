#include <stdio.h>
#include <stdlib.h>

int main () {
    // burda 50 byte lik yer ayirdi ;x = 1byte oldugu icin sorun olmadi
    // ama int *adr = malloc(50) olsaydi ;int 4 byte oldugu icn 12 int
    // alabilirdi max. => 12 * 4 = 48byte
    char *adr = malloc(50);
    for(int i = 0; i < 50;++i){
        *(adr+i) = 'x';
    }
    for(int i = 0; i < 50;++i){
        printf("%c",*adr);
    }
    free(adr);
    return EXIT_SUCCESS;
}

