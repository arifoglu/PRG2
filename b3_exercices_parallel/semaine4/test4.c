#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *ptr;
    char *ptr2;

    ptr = malloc(sizeof(int));
    if(ptr == NULL){
        printf("Error memory allocation!!");
        return EXIT_FAILURE;
    }

    ptr2 = malloc(sizeof(char));
    if(ptr2 == NULL){
        printf("Error memory allocation!!");
        free(ptr);
        return EXIT_FAILURE;
    }

    *ptr = 42;
    *ptr2 = 'A';
    printf("ptr : %d, ptr2 : %c\n",*ptr,*ptr2);


    free(ptr);
    free(ptr2);
    return 0;
}
