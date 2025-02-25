#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 4;
    int* ptr;
    
    ptr = &a;

    printf("%d\n",*ptr);
    
    return EXIT_SUCCESS;
}