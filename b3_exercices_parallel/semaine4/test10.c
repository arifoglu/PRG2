#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *ptr1;
    int *ptr2;
    int size;

    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("addres = %p\n",ptr1);
    
    // size changed
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1,size);

    printf("addres = %p\n",ptr2);
    return 0;
}
