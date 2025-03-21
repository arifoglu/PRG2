#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;
    
    ptr1 = malloc(4);
    ptr2 = realloc(ptr1,8);

    printf("4 bytes allocated at adress   %p !!\n",ptr1);
    if(ptr2 == NULL){
        printf("Unable to resize memory!!\n");
    }else{
        printf("8 bytes reallocated at adress %p !!\n",ptr2);
        ptr1 = ptr2;

    }
    free(ptr1);
    return 0;
}