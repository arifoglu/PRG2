#include <stdio.h>
#include <stdlib.h>

int main() {
    int vector[4] = {10,20,30,40};
    int *p_vector;

    // tablo ayni zamanda bir pointer
    p_vector = vector;

    printf("address vector : %p\n",vector);
    
    printf("address vector : %p\n",&vector);

    printf("vector[0]      : %p\n",&vector[0]);
    
    printf("p_vector       : %p\n",p_vector);

    printf("vector[0]      : %d\n",vector[0]);

    printf("p_vector[0]       : %d\n",*p_vector);

    printf("p_vector[1]       : %d\n",*(p_vector+1));



    return 0;
}