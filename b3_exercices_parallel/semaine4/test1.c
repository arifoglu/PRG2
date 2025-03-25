#include <stdio.h>

int main() {
    int number = 41;
    int *ptr;
    int val;
    ptr = &number;
    printf("number  : %d \n",number);
    printf("pointer dereference : %d \n",*ptr);
    printf("pointer : %p \n",ptr);

    val = *ptr;
    printf("val  : %d \n",number);
    printf("pointer dereference : %d \n",*ptr);
    printf("pointer : %p \n",ptr);
    return 0;
}