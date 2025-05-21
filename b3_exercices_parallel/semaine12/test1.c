#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    int *ptr;
    size_t size = 100000000000000000;
    
    ptr = (int *) malloc(size * sizeof(int));
    if(ptr == NULL){
        printf("Error numero %d\n",errno);
        perror("Error allocation memory");
        exit(EXIT_FAILURE);
    }
    return 0;
}