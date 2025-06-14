#include <stdio.h>
#include <stdlib.h>


int main () {
    int nombre, inverse = 0;

    printf("Entrez : ");
    scanf("%d",nombre);

    do{
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }while(nobre > 0)

    return EXIT_SUCCESS;
}
