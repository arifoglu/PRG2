#include <stdio.h>
#include <stdlib.h>

int main () {
    long *adr = malloc(50 * sizeof(long));
    for(int i = 0; i < 50;++i){
        *(adr+i) = 'x';
    }
    for(int i = 0; i < 50;++i){
        printf("%lu",*adr);
    }
    free(adr);
    return EXIT_SUCCESS;
}

