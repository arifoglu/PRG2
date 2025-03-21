#include <stdio.h>
#include <stdlib.h>

int main () {
    char *adr1, *adr2, *adr3;
    adr1 = malloc(100);
    printf("allocation de 100 octets en : %p\n",adr1);
    free(adr1);
    
    adr2 = malloc(100);
    printf("allocation de 100 octets en : %p\n",adr2);
    free(adr2);
    return EXIT_SUCCESS;
}

