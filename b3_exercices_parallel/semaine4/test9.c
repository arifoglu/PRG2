#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = (int *)calloc(10,sizeof(*ptr1));
    if(ptr1 == NULL){
        goto liberation;
    }

    ptr2 = (int *)calloc(12,sizeof(*ptr2));
    if(ptr2 == NULL){
        goto liberation;
    }

    liberation:
        free(ptr1);
        free(ptr2);
    return 0;
}
