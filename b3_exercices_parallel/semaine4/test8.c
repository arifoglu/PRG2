#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *ptr = NULL;
    ptr = calloc(4,sizeof(*ptr));
    if(ptr == NULL){
        printf("Error!!");
        return EXIT_FAILURE;
    }
    
    printf("addres ptr                 : %p\n",ptr);
    printf("val[0] = %d , addres ptr[0] : %p\n",ptr[0],(ptr+0));
    printf("val[1] = %d , addres ptr[1] : %p\n",ptr[1],(ptr+1));
    printf("val[2] = %d , addres ptr[2] : %p\n",ptr[2],(ptr+2));
    printf("val[3] = %d , addres ptr[3] : %p\n",ptr[3],(ptr+3));

    printf("**************************\n");

    ptr[0] = 12;
    ptr[1] = 23;
    ptr[2] = 34;
    ptr[3] = 24;
    printf("addres ptr                  : %p\n",ptr);
    printf("val[0] = %d , addres ptr[0] : %p\n",ptr[0],(ptr+0));
    printf("val[1] = %d , addres ptr[1] : %p\n",ptr[1],(ptr+1));
    printf("val[2] = %d , addres ptr[2] : %p\n",ptr[2],(ptr+2));
    printf("val[3] = %d , addres ptr[3] : %p\n",ptr[3],(ptr+3));

    free(ptr);
    return 0;
}
