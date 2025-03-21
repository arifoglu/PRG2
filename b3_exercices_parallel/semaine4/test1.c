#include <stdio.h>
#include <stdlib.h>

int main() {
    // malloc(size) => byte 
    int *ptr1 = malloc(10) ;// 10 bytes memory allocation
    printf("%p\n",ptr1);    // memory addres => ptr => 0x149e05eb0 
    printf("%d\n",*ptr1);   // contents not defined
    free(ptr1);             // memors is freed

    // malloc(size) => byte
    int *ptr2 = malloc(10 * sizeof(int));
    printf("%p\n",ptr2);    // 10 * 4 = 40 bytes memory allocation
    printf("%d\n",*ptr2);   // contents not defined
    free(ptr2);             // memors is freed

    // malloc(size) => byte
    int *ptr3 = malloc(10 * sizeof(char));
    printf("%p\n",ptr3);    // 10 * 1 = 10 bytes memory allocation
    printf("%d\n",*ptr3);   // contents not defined
    free(ptr3);             // memors is freed


    return 0;
}
