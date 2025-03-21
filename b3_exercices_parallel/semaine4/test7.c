#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *ptr = NULL;
    ptr = calloc(4,sizeof(*ptr));
    
    *ptr = 2;
    
    printf("address = %p\n",ptr);
    
    printf("ptr[0]  = %d\n",*ptr);
    printf("ptr[1]  = %d\n",*(ptr+1));
    printf("ptr[2]  = %d\n",*(ptr+2));
    printf("ptr[3]  = %d\n",*(ptr+3));

    printf("*******************\n");
    
    printf("address = %p\n",ptr);
    ptr[1] = 4; 
    ptr[2] = 6; 
    printf("ptr[0]  = %d\n",*ptr);
    printf("ptr[1]  = %d\n",*(ptr+1));
    printf("ptr[2]  = %d\n",*(ptr+2));
    printf("ptr[3]  = %d\n",*(ptr+3));

    printf("*******************\n");


    
    return 0;
}
