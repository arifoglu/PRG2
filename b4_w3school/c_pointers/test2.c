#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[4] = {25,50,75,100};
    
    printf("%p\n",numeros);
    printf("%d\n",*numeros);
    
    printf("%p\n",&numeros[0]);


    return EXIT_SUCCESS;
}