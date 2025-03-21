#include <stdio.h>
#include <stdlib.h>

int main () {
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

