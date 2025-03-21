#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *ptr1;
    int *ptr2;
    int size;

    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    if(ptr1 == NULL){
        printf("Memory allocation failed for ptr1\n");
        goto error;
    }

    printf("addres = %p\n",ptr1);
    
    // size changed
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1,size);
    if(ptr2 == NULL){
        printf("Memory allocation failed for ptr2\n");
        goto cleanup;        
    }

    printf("addres = %p\n",ptr2);

    free(ptr2);
    return 0;

    error:
    return EXIT_FAILURE;
    cleanup:
    free(ptr1);
}
