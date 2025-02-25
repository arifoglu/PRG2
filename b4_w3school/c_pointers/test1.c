#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 23;
    printf("age : %d\n",age);
    printf("address of age : %p\n",&age);

    int numero = 23;
    int* ptr = &numero;
    printf("numero : %d\n",numero);
    printf("address of numero : %p\n",&numero);
    printf("pointer of address of numero : %p\n",ptr);
    printf("numero : %d\n",*ptr);

    return EXIT_SUCCESS;
}